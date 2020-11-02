//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Djikstra.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_mouse.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <cstdio>


Dijkstra::Dijkstra(const int height, const int width){
	window = SDL_CreateWindow("Dijkstra", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, 0);
}

void Dijkstra::render(){
	graph.render(renderer);
}

void Dijkstra::EventHandler(){
	bool flag = true;
	int i = 0;
	while(flag){
		SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
		while(SDL_PollEvent(&event) != 0){
			if(event.type == SDL_QUIT)
				flag = false;	
			if(event.type == SDL_MOUSEBUTTONDOWN){
				if(event.button.button == SDL_BUTTON_LEFT){
					int mouseX, mouseY;
					SDL_GetMouseState(&mouseX, &mouseY);
					if(graph.isNodeClicked(mouseX, mouseY)){
						printf("Program log:Node clicked\n");
					}
					else{
						printf("Program log: Button pressed\n");				
						Node node(i, event.button.x, event.button.y, {255, 255, 255});
						graph.addNode(node);
						i++;
					}
				}
			}
		}
		SDL_RenderClear(renderer);
		render();
		SDL_RenderPresent(renderer);
	}
}
