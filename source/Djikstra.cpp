//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Djikstra.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>

Dijkstra::Dijkstra(const int height, const int width){
	window = SDL_CreateWindow("Dijkstra", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
}

void Dijkstra::render(){
	bool flag = true;
	while(flag){
		while(SDL_PollEvent(&event) != 0){
			if(event.type == SDL_QUIT)
				flag = false;	
		}
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
	}
}
