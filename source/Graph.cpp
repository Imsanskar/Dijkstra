//
// Created by imsanskar on 2020-10-31.
//


#include "../includes/Graph.h"
#include <SDL2/SDL_ttf.h>
#include <cstddef>
#include <iostream>

void Graph::addNode(Node node){
	edges[node] = {};
	std::string path= "../Media/Fonts/font.ttf";
	font = TTF_OpenFont(path.c_str(), 30);
	if(font == nullptr){
		std::cout<<TTF_GetError()<<"\n";
	}
}

void Graph::addEdge(Edge edge){
    printf("Edge created. Source Value:%d x-coord:%d y-coord:%d\n", edge.source.value, edge.source.xPos, edge.source.yPos);
    edges[edge.source].push_back(edge.dest);
}

bool Graph::isNodeClicked(int x, int y){
	for(auto &node: edges){
		if(node.first.isPressed(x,y))
			return true;
	}
	return false;
}
bool Graph::isPossible(int x, int y) {
    for(auto &node: edges){
        if(node.first.isPossible(x,y))
            return true;
    }
    return false;
}


void Graph::render(SDL_Renderer *renderer){
	for(auto &node: edges) {
        node.first.render(renderer, font);
        for(auto &n:edges[node.first]){
            Edge edge;
            edge.source = node.first;
            edge.dest = n;
            edge.render(renderer);
        }
    }

}

Node Graph::getClickedNode(int x, int y) {
    for(auto &node: edges){
        if(node.first.isPressed(x,y))
            return node.first;
    }
}


