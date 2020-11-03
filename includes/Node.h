//
// Created by imsanskar on 2020-10-31.
//

#ifndef DSA_PROJECT_NODE_H
#define DSA_PROJECT_NODE_H

#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_ttf.h>
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
	bool isPressed(int x, int y) const;

	//renderer
	void render(SDL_Renderer *renderer, TTF_Font *font) const;

	bool operator <(const Node node) const;

	bool operator ==(const Node &node) const;
};


#endif //DSA_PROJECT_NODE_H
