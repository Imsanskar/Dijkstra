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


Dijkstra::Dijkstra(const int height, const int width){
	window = SDL_CreateWindow("Dijkstra", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, 0);
    std::string path= "./Media/Fonts/font2.ttf";
    weightText = "";
	font = TTF_OpenFont(path.c_str(), 20);
	rectangle = {950, 660, 50, 30};
	isNodeClicked = false;
	mouseX = mouseY = 0;
//	TTF_Init();
}

void Dijkstra::render(){
    graph.render(renderer);
    std::string path= "./Media/Fonts/font2.ttf";
    Texture weightTextTexture(path);
    if(isNodeClicked) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rectangle);
        DrawCircle(source.xPos, source.yPos, 45);
        SDL_Color color = {255, 255, 255};
        if(!weightText.empty()) {
            weightTextTexture.loadFromText(renderer, weightText, color, font);
            weightTextTexture.render(renderer, 950, 660);
        }
    }
}

void Dijkstra::EventHandler(){
//    bool isNodeClicked = false;
    //bool isPossible = false ;
	bool flag = true;
	int i = 0;
    SDL_RenderClear(renderer);
    SDL_StartTextInput();
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
				if(event.button.button == SDL_BUTTON_LEFT){
					SDL_GetMouseState(&mouseX, &mouseY);
                    printf("%d %d\n", mouseX, mouseY);
					if(graph.isNodeClicked(mouseX, mouseY)){
						printf("Program log:Node clicked\n");
						if(isNodeClicked){
						    destination = graph.getClickedNode(mouseX, mouseY);
						    Edge edge;
						    edge.source = source;
						    edge.dest = destination;
						    std::cout<<weightText<<"\n";
						    if(source == destination) {
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
						    source = graph.getClickedNode(mouseX, mouseY);
						    isNodeClicked = true;
						}
					}
					else if(!isNodeClicked){
                        if(graph.isPossible(mouseX, mouseY)){
					        printf("Node too near\n");
                        }
					    else {
                            printf("Program log: Button pressed\n");
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
