//
// Created by imsanskar on 2020-10-31.
//

#ifndef DSA_PROJECT_EDGE_H
#define DSA_PROJECT_EDGE_H
#include "Node.h"

class Edge{
public:
	Node dest,source;
	int weight;
public:
	//Normal constructor
	Edge();

	//get the co ordinate distance between the nodes
	int getDistance() const;

	void render(SDL_Renderer *renderer, TTF_Font *font, SDL_Color color = {0,0,0}) const;
};


#endif //DSA_PROJECT_EDGE_H
