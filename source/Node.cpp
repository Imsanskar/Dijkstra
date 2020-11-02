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
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    const int radius = 40;
    int center_x = xPos;
    int center_y = yPos;
    const int diameter=2*radius;
    int x= radius-1;
    int y=0;
    int tx=1;
    int ty=1;
    int P=tx-diameter;
    while(x>=y) {
        SDL_RenderDrawPoint(renderer, center_x + x, center_y + y);
        SDL_RenderDrawPoint(renderer, center_x + x, center_y - y);
        SDL_RenderDrawPoint(renderer, center_x - x, center_y + y);
        SDL_RenderDrawPoint(renderer, center_x - x, center_y - y);
        SDL_RenderDrawPoint(renderer, center_x + y, center_y + x);
        SDL_RenderDrawPoint(renderer, center_x + y, center_y - x);
        SDL_RenderDrawPoint(renderer, center_x - y, center_y + x);
        SDL_RenderDrawPoint(renderer, center_x - y, center_y + -x);

        if (P <= 0) {
            ++y;
            P += ty;
            ty += 2;
        }
        if (P > 0) {
            --x;
            tx += 2;
            P += (tx - diameter);
        }
    }
	std::string text = std::to_string(value);
	std::string path = "./Media/Fonts/font.ttf";
	Texture texture(path);
	texture.loadFromText(renderer, text, color, font);
	texture.render(renderer, xPos - 10, yPos - 15);
}


bool Node::isPressed(int x, int y) const{
	const int dist = (x - xPos) * (x - xPos) + (y - yPos) * (y - yPos);
	if(dist < 1600)
		return true;
	return false;
}

bool Node::operator<(const Node node) const{
	return node.value < this->value;
}
