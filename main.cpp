#include "includes/texture.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_video.h>
#include <string>


int main(int argc, char *argv[])
{
	int w,h;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("Djisktra", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 720, SDL_WINDOW_SHOWN);

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

	bool flag = false;

	SDL_Event e;


	SDL_Color textColor = { 0, 0, 0 };

	std::string text = "Text";

	std::string path = "./Media/Fonts/font.ttf";
	Texture texture(path);
	texture.loadFromText(renderer, text, textColor);
	
	while(!flag){
		while(SDL_PollEvent(&e) != 0){
			if(e.type == SDL_QUIT)
				flag = true;
		}
		SDL_RenderClear(renderer);
		texture.render(renderer, 200, 200);
		SDL_RenderPresent(renderer);
		
	}
}

