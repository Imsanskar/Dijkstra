//
// Created by imsanskar on 2020-10-31.
//


#include "../includes/Graph.h"
#include <SDL2/SDL_ttf.h>
#include <cstddef>
#include <iostream>

Graph::Graph() {
//    TTF_Init();
    std::string path= "./Media/Fonts/font2.ttf";
    font = TTF_OpenFont(path.c_str(), 20);
    if(font == nullptr){
        std::cout<<TTF_GetError()<<"\n";
    }
}

void Graph::addNode(Node node){
	edges[node] = {};
//	std::string path= "../Media/Fonts/font.ttf";
//	font = TTF_OpenFont(path.c_str(), 30);
//	if(font == nullptr){
//		std::cout<<TTF_GetError()<<"\n";
//	}
}

void Graph::addEdge(Edge edge){
    printf("Edge created. Source Value:%d x-coord:%d y-coord:%d\n", edge.source.value, edge.source.xPos, edge.source.yPos);
    edges[edge.source].push_back(std::make_pair(edge.dest, edge.weight));
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
            edge.dest = n.first;
            edge.weight = n.second;
            edge.render(renderer, font);
        }
    }
    source.render(renderer, font, {0, 240, 0});
    destination.render(renderer, font, {255, 0, 0});
}

Node Graph::getClickedNode(int x, int y) {
    for(auto &node: edges){
        if(node.first.isPressed(x,y))
            return node.first;
    }
}

//To be implemented
std::vector<std::pair<Node, int>> Graph::children(Node node) {
    return edges[node];
}

std::vector<Node> Graph::getVertices() {
    std::vector<Node> vertices;
    for(auto &node:edges){
        vertices.push_back(node.first);
    }
    return vertices;
}


