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
	TTF_Init();
}

void Dijkstra::render(){
	graph.render(renderer);
}

void Dijkstra::EventHandler(){
	bool flag = true;
	int i = 0;
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderClear(renderer);
	while(flag){

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
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
                        DrawCircle(renderer,mouseX,mouseY,10);
                        SDL_RenderPresent(renderer);
						Node node(i, event.button.x, event.button.y, {255, 255, 255});
						graph.addNode(node);
						i++;
					}
				}
			}
		}

		//render();
		//SDL_RenderPresent(renderer);
	}
}

void Dijkstra::DrawCircle(SDL_Renderer* renderer1,int center_x,int center_y,int radius)
{
    const int diameter=2*radius;
    int x= radius-1;
    int y=0;
    int tx=1;
    int ty=1;
    int P=tx-diameter;
    while(x>=y) {
        SDL_RenderDrawPoint(renderer1, center_x + x, center_y + y);
        SDL_RenderDrawPoint(renderer1, center_x + x, center_y - y);
        SDL_RenderDrawPoint(renderer1, center_x - x, center_y + y);
        SDL_RenderDrawPoint(renderer1, center_x - x, center_y - y);
        SDL_RenderDrawPoint(renderer1, center_x + y, center_y + x);
        SDL_RenderDrawPoint(renderer1, center_x + y, center_y - x);
        SDL_RenderDrawPoint(renderer1, center_x - y, center_y + x);
        SDL_RenderDrawPoint(renderer1, center_x - y, center_y + -x);

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
