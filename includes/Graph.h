//
// Created by imsanskar on 2020-10-31.
//

#ifndef DSA_PROJECT_GRAPH_H
#define DSA_PROJECT_GRAPH_H

#include "Node.h"
#include "Edge.h"
#include <SDL2/SDL_ttf.h>
#include<map>
#include<vector>

class Graph{
public:
	std::map<Node,std::vector<std::pair<Node,int>>> edges;
	TTF_Font *font;
public:
    Graph();

	void addNode(Node node);
	
	void addEdge(Edge edge);

	std::vector<std::pair<Node, int>> children(Node node);

	void render(SDL_Renderer *renderer);

	bool isNodeClicked(int x, int y);
	bool isPossible(int x,int y);

	Node getClickedNode(int x, int y);
};


#endif //DSA_PROJECT_GRAPH_H
