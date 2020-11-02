//
// Created by imsanskar on 2020-10-31.
//


#include "../includes/Graph.h"

void Graph::addNode(Node node){
	edges[node] = {};
}

void Graph::addEdge(Edge edge){
	
}

bool Graph::isNodeClicked(float x, float y){
	for(auto &node: edges){
		if(node.first.isPressed(x,y))
			return true;
	}
	return false;
}

void Graph::render(SDL_Renderer *renderer){
	for(auto &node: edges)
		node.first.render(renderer);
}
