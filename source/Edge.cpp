//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Edge.h"
#include <cmath>
#include <math.h>
#include<iostream>

Edge::Edge()= default;


//render method for edge
void Edge::render(SDL_Renderer *renderer, TTF_Font *font) const {
//    SDL_Color color = { 235, 203, 139};
	const float pi = 2 * acos(0.0f);
	Texture texture;
	float midX = (float(dest.xPos) + float(source.xPos))/2;
	float midY = (float(dest.yPos) + float(source.yPos))/2;
	float slope = (midX - float(source.yPos))/float((dest.xPos - source.xPos));
	float c = float(source.yPos) - (slope * float(source.xPos));
	int dist = getDistance();
	float vecX = 50 * (float(source.xPos) - midX)/dist;
	float vecY = 50 * (float(source.yPos) - midY)/dist;
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
//    texture.loadFromText(renderer, std::to_string(int(dist/60)), color, font);
//    texture.render(renderer , midX + 20, midY);
    SDL_RenderDrawLine(renderer, source.xPos, source.yPos, dest.xPos, dest.yPos);
    SDL_RenderDrawLine(renderer, int(midX), int(midY), midX+(vecX*cos(pi/4)-vecY*sin(pi/4)), midY+(vecX*sin(pi/4)+vecY*cos(pi/4)));
    SDL_RenderDrawLine(renderer, int(midX), int(midY), midX+(vecX*cos(-pi/4)-vecY*sin(-pi/4)), midY+(vecX*sin(-pi/4)+vecY*cos(-pi/4)));
}

int Edge::getDistance() const {
    return int(std::sqrt((dest.xPos - source.xPos) * (dest.xPos - source.xPos) + (dest.yPos - source.yPos) * (dest.yPos - source.yPos)));
}
