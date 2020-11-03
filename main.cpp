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
	Dijkstra dijkstra(720, 1000);
	dijkstra.EventHandler();
}
