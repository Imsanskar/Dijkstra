//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Node.h"
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_ttf.h>
#include <cstdio>
#include <iostream>
#include <string>

Node::Node(int _value, int x, int y, SDL_Color _color){
	value = _value;
	xPos = x;
	yPos = y;
	color = {100, 100, 20};
	char c = 'A' + value;
	printf("Node created. Value:%d x-coord:%d y-coord:%d\n", value, x, y);
}


void Node::render(SDL_Renderer *renderer, TTF_Font *font) const{
	std::string text = std::to_string(value);
	std::string path = "./Media/Fonts/font.ttf";
	Texture texture(path);
	texture.loadFromText(renderer, text, color, font);
	texture.render(renderer, xPos, yPos);
}


bool Node::isPressed(float x, float y) const{
	const int dist = (x - xPos) * (x - xPos) + (y - yPos) * (y - yPos);
	if(dist < 400)
		return true;
	return false;
}

bool Node::operator<(const Node node) const{
	return node.value < this->value;
}
