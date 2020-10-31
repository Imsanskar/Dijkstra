#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>


int main(int argc, char *argv[])
{
	int w,h;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("Djisktra", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 720, SDL_WINDOW_SHOWN);

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	bool flag = false;

	SDL_Event e;

	while(!flag){
		while(SDL_PollEvent(&e) != 0){
			if(e.type == SDL_QUIT)
				flag = true;
		}

	}
}

