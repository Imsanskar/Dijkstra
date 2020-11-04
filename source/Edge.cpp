//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Edge.h"
#include <cmath>
#include <math.h>
#include<iostream>

Edge::Edge()= default;


void Edge::render(SDL_Renderer *renderer, TTF_Font *font) const{
    const float pi = 2 * acos(0.0f);
    float midX = (dest.xPos + source.xPos)/2;
    float midY = (dest.yPos + source.yPos)/2;
    float slope = (midX - source.yPos)/(dest.xPos - source.xPos);
    float c = source.yPos - (slope * source.xPos);
    float dist = (dest.xPos - source.xPos) * (dest.xPos - source.xPos) + (dest.yPos - source.yPos) * (dest.yPos - source.yPos);
    float distance=std::sqrt(dist);
    float vecX = 50 * (source.xPos - midX)/distance;
    float vecY = 50 * (source.yPos - midY)/distance;
    float radius=40;

    int xsource = source.xPos-(source.xPos-dest.xPos)*radius / distance;
    int ysource = source.yPos-(source.yPos-dest.yPos)/distance*radius;
    int xdest  = dest.xPos+(source.xPos-dest.xPos)/distance*radius;
    int ydest  = dest.yPos+(source.yPos-dest.yPos)/distance*radius;
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderDrawLine(renderer, xsource, ysource, xdest, ydest);
    SDL_RenderDrawLine(renderer, xsource+1, ysource, xdest+1, ydest);
    SDL_RenderDrawLine(renderer, xsource, ysource+1, xdest, ydest+1);
    SDL_RenderDrawLine(renderer, xsource-1, ysource, xdest-1, ydest);
    SDL_RenderDrawLine(renderer, xsource, ysource-1, xdest, ydest-1);
    SDL_RenderDrawLine(renderer, midX, midY, midX+(vecX*cos(pi/4)-vecY*sin(pi/4)), midY+(vecX*sin(pi/4)+vecY*cos(pi/4)));
    SDL_RenderDrawLine(renderer, midX, midY, midX+(vecX*cos(-pi/4)-vecY*sin(-pi/4)), midY+(vecX*sin(-pi/4)+vecY*cos(-pi/4)));

    Texture texture;
    texture.loadFromText(renderer, std::to_string(weight), {255, 255, 255}, font);
    texture.render(renderer, midX+20, midY);
}