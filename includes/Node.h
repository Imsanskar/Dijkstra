//
// Created by imsanskar on 2020-10-31.
//

#ifndef DSA_PROJECT_NODE_H
#define DSA_PROJECT_NODE_H

#include <SDL2/SDL_pixels.h>
#include <string>
#include "texture.h"


class Node{
public:
	int xPos;
   	int yPos;
	SDL_Color color;
	int value;
public:
	Node(){}

	//Constructor
	Node(int _value, int x, int y, SDL_Color _color);

	//is node pressed
	bool isPressed();

	//renderer
	void render();
};


#endif //DSA_PROJECT_NODE_H
