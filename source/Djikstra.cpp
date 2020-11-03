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
	TTF_Init();
}

void Dijkstra::render(){
	graph.render(renderer);
}

void Dijkstra::EventHandler(){
    bool isNodeClicked = false;
    Node source, destination;
	bool flag = true;
	int i = 0;
    SDL_RenderClear(renderer);
	while(flag){
        SDL_SetRenderDrawColor(renderer, 76, 188, 187, 255);
		while(SDL_PollEvent(&event) != 0){
			if(event.type == SDL_QUIT)
				flag = false;	
			if(event.type == SDL_KEYUP){
				switch(event.key.keysym.sym){
					//escape functionality for cancelling the creation of edge
					case SDLK_ESCAPE:
						printf("Program log:Edge creation cancelled\n");
						isNodeClicked = false;
						break;
				}
			}
			if(event.type == SDL_MOUSEBUTTONDOWN){
				if(event.button.button == SDL_BUTTON_LEFT){
					int mouseX, mouseY;
					SDL_GetMouseState(&mouseX, &mouseY);

					if(graph.isNodeClicked(mouseX, mouseY)){
						printf("Program log:Node clicked\n");
						if(isNodeClicked){
						    destination = graph.getClickedNode(mouseX, mouseY);
						    Edge edge;
						    edge.source = source;
						    edge.dest = destination;
						    if(source == destination) {
                                printf("Duplicate node\n");
                            }
						    else {
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
						printf("Program log: Button pressed\n");
                        SDL_RenderPresent(renderer);
						Node node(i, event.button.x, event.button.y, {255, 255, 255});
						graph.addNode(node);
						i++;
					}
				}
			}
		}
        SDL_RenderClear(renderer);
        if(isNodeClicked)
            DrawCircle(source.xPos, source.yPos, 45);
		render();
		SDL_RenderPresent(renderer);
	}
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
