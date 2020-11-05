//
// Created by imsanskar on 2020-10-31.
//

#ifndef DSA_PROJECT_DJIKSTRA_H
#define DSA_PROJECT_DJIKSTRA_H

#include "Node.h"
#include "Edge.h"
#include "Graph.h"
#include "Button.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <queue>

class Dijkstra{
private:
	SDL_Window *window;	
	SDL_Renderer *renderer;
	SDL_Event event{};
	Graph graph;
	TTF_Font *font;
	SDL_Rect rectangle;
	bool isNodeClicked;
    int mouseX, mouseY;
    Node src, dest;
    Node source, destination;
    std::string weightText;
    bool selectSource, selectDestination, isStartSelected;
    std::vector<std::pair<Node, int>> shortestPath;
    std::map<Node, Node> previousNodes;
    std::priority_queue<std::pair<int, Node>, std::vector<std::pair<int, Node>>, std::greater<std::pair<int, Node>>> pq;
public:
	Dijkstra(const int height, const int width);
	void render();
	void EventHandler();
	void DrawCircle(int center_x,int center_y,int radius);
	void shortestPathFinder();
};

#endif //DSA_PROJECT_DJIKSTRA_H
