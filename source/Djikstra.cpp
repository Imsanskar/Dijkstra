//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Djikstra.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keyboard.h>
#include <SDL2/SDL_keycode.h>
#include <SDL2/SDL_mouse.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <cstdio>
#include <iostream>
#include <Button.h>
#include <algorithm>


Dijkstra::Dijkstra(const int height, const int width){
    window = SDL_CreateWindow("Dijkstra", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, 0);
    std::string path= "./Media/Fonts/font2.ttf";
    weightText = "";
    font = TTF_OpenFont(path.c_str(), 20);
    rectangle = {950, 660, 50, 30};
    isNodeClicked = false;
    mouseX = mouseY = 0;
    selectSource = false;
    selectDestination = false;
//	TTF_Init();
}

void Dijkstra::render(){
    graph.render(renderer);
    std::string path= "../Media/Fonts/font2.ttf";
    Texture weightTextTexture(path);
    if(isNodeClicked) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rectangle);
        DrawCircle(src.xPos, src.yPos, source.radius + 3);
        SDL_Color color = {255, 255, 255};
        if(!weightText.empty()) {
            weightTextTexture.loadFromText(renderer, weightText, color, font);
            weightTextTexture.render(renderer, 950, 660);
        }
    }
    for(auto &node:shortestPath){
        Edge edge;
        edge.source = previousNodes[node.first];
        edge.dest = node.first;
        edge.render(renderer, font, {255, 0, 0});
    }
}

void Dijkstra::EventHandler(){
//    bool isNodeClicked = false;
    //bool isPossible = false ;
    bool flag = true;
    int i = 0;
    SDL_RenderClear(renderer);
    SDL_StartTextInput();
    Button startButton("Start", 800, 50, 200);
    Button selectSourceButton("Select Source", 800, 100, 200);
    Button selectDestinationButton("Select Destination", 800, 150, 200);
    while(flag){
        SDL_SetRenderDrawColor(renderer, 76, 188, 187, 255);
        while(SDL_PollEvent(&event) != 0){
            if(event.type == SDL_QUIT)
                flag = false;
            if(event.type == SDL_KEYDOWN){
                //escape functionality for cancelling the creation of edge
                if(event.key.keysym.sym == SDLK_ESCAPE) {
                    printf("Program log:Edge creation cancelled\n");
                    isNodeClicked = false;
                    break;
                }

                //handle backspace
                if(event.key.keysym.sym == SDLK_BACKSPACE && weightText.length() > 0){
                    weightText.pop_back();
                }
            }
            if(event.type == SDL_TEXTINPUT)
                weightText += event.text.text;
            if(event.type == SDL_MOUSEBUTTONDOWN){
                SDL_GetMouseState(&mouseX, &mouseY);
                if(event.button.button == SDL_BUTTON_LEFT){
//                    SDL_GetMouseState(&mouseX, &mouseY);
                    printf("%d %d\n", mouseX, mouseY);
                    if(selectSourceButton.isClicked(mouseX, mouseY)) {
                        selectSource = true;
                    }
                    else if(startButton.isClicked(mouseX, mouseY)){
                        shortestPathFinder();
                        startButton.outer(renderer);
                    }
                    else if(selectDestinationButton.isClicked(mouseX, mouseY)) {
                        selectDestination = true;
                    }
                    else if(graph.isNodeClicked(mouseX, mouseY) && selectSource){
                        source = graph.getClickedNode(mouseX, mouseY);
                        printf("Selected node value: %d\n", source.value);
                        selectSource = false;
                    }
                    else if(graph.isNodeClicked(mouseX, mouseY) && selectDestination){
                        destination = graph.getClickedNode(mouseX, mouseY);
                        printf("Selected node value: %d\n", destination.value);
                        selectDestination = false;
                    }
                    else if(graph.isNodeClicked(mouseX, mouseY)){
                        printf("Program log:Node clicked\n");
                        if(isNodeClicked){
                            if(selectSource){
                                source = graph.getClickedNode(mouseX, mouseY);
                            }
                            dest = graph.getClickedNode(mouseX, mouseY);
                            Edge edge;
                            edge.source = src;
                            edge.dest = dest;
                            std::cout<<weightText<<"\n";
                            if(src == dest) {
                                printf("Duplicate node\n");
                            }
                            else if(weightText.empty()){
                                printf("Empty value\n");
                            }
                            else {
                                edge.weight = std::stoi(weightText);
                                weightText = "";
                                isNodeClicked = false;
                                graph.addEdge(edge);
                            }
                        }
                        else{
                            src = graph.getClickedNode(mouseX, mouseY);
                            isNodeClicked = true;
                        }
                    }
                    else if(!isNodeClicked){
                        if(graph.isPossible(mouseX, mouseY)){
                            printf("Node too near\n");
                        }
                        else {
                            SDL_RenderPresent(renderer);
                            Node node(i, event.button.x, event.button.y, {255, 255, 255});
                            graph.addNode(node);
                            i++;
                        }
                    }
                }
            }
        }
        SDL_RenderClear(renderer);
        startButton.render(renderer, font);
        selectDestinationButton.render(renderer, font);
        selectSourceButton.render(renderer, font);
        if(selectSource)
            selectSourceButton.outer(renderer);
        if(selectDestination)
            selectDestinationButton.outer(renderer);
        render();
        SDL_RenderPresent(renderer);
    }
    SDL_StopTextInput();
}

void Dijkstra::DrawCircle(int center_x, int center_y, int radius) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    const int diameter=2*radius;
    int x= radius-1;
    int y=0;
    int tx=1;
    int ty=1;
    int P=tx-diameter;
    while(x>=y) {
        SDL_RenderDrawPoint(renderer, center_x + x, center_y + y);
        SDL_RenderDrawPoint(renderer, center_x + x, center_y - y);
        SDL_RenderDrawPoint(renderer, center_x - x, center_y + y);
        SDL_RenderDrawPoint(renderer, center_x - x, center_y - y);
        SDL_RenderDrawPoint(renderer, center_x + y, center_y + x);
        SDL_RenderDrawPoint(renderer, center_x + y, center_y - x);
        SDL_RenderDrawPoint(renderer, center_x - y, center_y + x);
        SDL_RenderDrawPoint(renderer, center_x - y, center_y + -x);

        if (P <= 0) {
            ++y;
            P += ty;
            ty += 2;
        }
        if (P > 0) {
            --x;
            tx += 2;
            P += (tx - diameter);
        }
    }
}

void Dijkstra::shortestPathFinder() {
    std::map<Node, int> distances;
    std::vector<Node> vertices = graph.getVertices();
    distances[source] = 0;
    previousNodes = {};
    shortestPath = {};
    for(auto &node:vertices){
        if(source == node)
            continue;
        distances[node] = 100000;
    }
    pq.push(std::make_pair(0, source));
    while(!pq.empty()){
        Node minimumNode = pq.top().second;
        pq.pop();
        std::vector<std::pair<Node, int>> adjacentVertices = graph.children(minimumNode);
        std::vector<std::pair<Node, int>>::iterator itr;
        for(itr = adjacentVertices.begin(); itr != adjacentVertices.end(); itr++){
            int distance = distances[minimumNode] + itr->second;
            if(distance < distances[itr->first]){
                distances[itr->first] = distance;
                previousNodes[itr->first] = minimumNode;
                pq.push(std::make_pair(distances[itr->first], itr->first));
            }
        }
    }
    // Print shortest distances stored in distance[]
    printf("Vertex   Distance from Source\n");
    for (auto & vertex : vertices)
        printf("%d \t\t %d\n", vertex.value, distances[vertex]);

    Node node = destination;
    while(node != source){
        shortestPath.emplace_back(std::make_pair(node, distances[node]));
        node = previousNodes[node];
    }
//    shortestPath.emplace_back(source, distances[source]);
    std::reverse(shortestPath.begin(), shortestPath.end());
    std::cout<<node.value<<"\n";
}
