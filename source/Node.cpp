//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Node.h"
#include <SDL2/SDL_pixels.h>
#include <cstdio>
#include <iostream>

Node::Node(int _value, int x, int y, SDL_Color _color){
	value = _value;
	xPos = x;
	yPos = y;
	color = _color;
	char c = 'A' + value;
	printf("Node created. Value:%d x-coord:%d y-coord:%d\n", value, x, y);
}


void Node::render(){
	
}


bool Node::isPressed(){
	return false;
}
