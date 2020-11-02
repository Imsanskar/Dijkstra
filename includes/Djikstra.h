//
// Created by imsanskar on 2020-10-31.
//

#ifndef DSA_PROJECT_DJIKSTRA_H
#define DSA_PROJECT_DJIKSTRA_H

#include "Node.h"
#include "Edge.h"
#include "Graph.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>


class Dijkstra{
private:
	SDL_Window *window;	
	SDL_Renderer *renderer;
	SDL_Event event;
	Graph graph;
public:
	Dijkstra(const int height, const int width);
	void render();
	void EventHandler();
	void DrawCircle(SDL_Renderer* renderer1,int center_x,int center_y,int radius);
};

#endif //DSA_PROJECT_DJIKSTRA_H
