//
// Created by imsanskar on 2020-10-31.
//

#ifndef DSA_PROJECT_DJIKSTRA_H
#define DSA_PROJECT_DJIKSTRA_H

#include <SDL2/SDL_events.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
class Dijkstra{
private:
	SDL_Window *window;	
	SDL_Renderer *renderer;
	SDL_Event event;
public:
	Dijkstra(const int height, const int width);
	void render();
};

#endif //DSA_PROJECT_DJIKSTRA_H
