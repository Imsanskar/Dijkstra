#include "texture.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keyboard.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_video.h>
#include <string>
#include <vector>
#include "Djikstra.h"

int main(int argc, char *argv[])
{
	int w,h;
	SDL_Init(SDL_INIT_EVERYTHING);
	/* SDL_Window *window = SDL_CreateWindow("Djisktra", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 720, SDL_WINDOW_SHOWN); */

	/* SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0); */

	/* bool flag = false; */

	/* SDL_Event e; */


	/* SDL_Color textColor = { 0, 0, 0 }; */

	/* std::string text = " "; */

	/* std::string path = "./Media/Fonts/font.ttf"; */

	/* int x[100],y[100]; */

	/* bool renderText = false; */

	/* std::vector<Texture> t; */

	/* int i = 0; */

	Dijkstra dijkstra(720, 1000);
	dijkstra.render();
	/* while(!flag){ */
	/* 	while(SDL_PollEvent(&e) != 0){ */
	/* 		if(e.type == SDL_QUIT) */
	/* 			flag = true; */
	/* 		if(e.type == SDL_MOUSEBUTTONDOWN){ */
	/* 			renderText = true; */
	/* 			x[i] = e.button.x; */
	/* 			y[i] = e.button.y; */	
	/* 			SDL_StartTextInput(); */
	/* 			char c = 'A' + i; */
	/* 			i++; */
	/* 			text = text + e.text.text; */
	/* 			Texture texture(path); */
	/* 			texture.loadFromText(renderer, std::string(1,c), textColor); */
	/* 			t.push_back(texture); */
	/* 			SDL_StopTextInput(); */
	/* 		} */
	/* 		if(e.type == SDL_TEXTINPUT){ */
	/* 		} */
	/* 	} */
	/* 	SDL_RenderClear(renderer); */
	/* 	int j = 0; */
	/* 	for(auto &te:t){ */
	/* 		te.render(renderer, x[j], y[j]); */
	/* 		j++; */
	/* 	} */
	/* 	SDL_RenderPresent(renderer); */
		
	/* } */
}
