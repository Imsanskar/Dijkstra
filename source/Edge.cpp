//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Edge.h"
#include <cmath>
#include <math.h>
#include<iostream>

Edge::Edge()= default;


//render method for edge
void Edge::render(SDL_Renderer *renderer) {
	const float pi = 2 * acos(0.0f);
	float midX = (dest.xPos + source.xPos)/2;
	float midY = (dest.yPos + source.yPos)/2;
	float slope = (midX - source.yPos)/(dest.xPos - source.xPos);
	float c = source.yPos - (slope * source.xPos);
	float dist = (dest.xPos - source.xPos) * (dest.xPos - source.xPos) + (dest.yPos - source.yPos) * (dest.yPos - source.yPos);
	float vecX = 100 * (source.xPos - midX)/(std::sqrt(dist));
	float vecY = 100 * (source.yPos - midY)/(std::sqrt(dist));
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderDrawLine(renderer, source.xPos, source.yPos, dest.xPos, dest.yPos);
    SDL_RenderDrawLine(renderer, midX, midY, midX+(vecX*cos(pi/4)-vecY*sin(pi/4)), midY+(vecX*sin(pi/4)+vecY*cos(pi/4)));
    SDL_RenderDrawLine(renderer, midX, midY, midX+(vecX*cos(-pi/4)-vecY*sin(-pi/4)), midY+(vecX*sin(-pi/4)+vecY*cos(-pi/4)));
}
