//
// Created by imsanskar on 2020-10-31.
//


#include "../includes/Graph.h"
#include <SDL2/SDL_ttf.h>
#include <cstddef>
#include <iostream>

void Graph::addNode(Node node){
	edges[node] = {};
	std::string path= "./Media/Fonts/font.ttf";
	font = TTF_OpenFont(path.c_str(), 30);
	if(font == NULL){
		std::cout<<TTF_GetError()<<"\n";
	}
}

void Graph::addEdge(Edge edge){
	
}

bool Graph::isNodeClicked(int x, int y){
	for(auto &node: edges){
		if(node.first.isPressed(x,y))
			return true;
	}
	return false;
}

void Graph::render(SDL_Renderer *renderer){
	for(auto &node: edges)
		node.first.render(renderer, font);
}
