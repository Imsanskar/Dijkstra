//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Edge.h"
#include <cmath>
#include <math.h>
#include<iostream>

Edge::Edge(){
    weight = -1;
}

void drawline(SDL_Renderer *renderer, int xsource, int ysource, int xdest, int ydest)
{
    SDL_RenderDrawLine(renderer, xsource, ysource, xdest, ydest);
    SDL_RenderDrawLine(renderer, xsource+1, ysource, xdest+1, ydest);
    SDL_RenderDrawLine(renderer, xsource, ysource+1, xdest, ydest+1);
    SDL_RenderDrawLine(renderer, xsource-1, ysource, xdest-1, ydest);
    SDL_RenderDrawLine(renderer, xsource, ysource-1, xdest, ydest-1);
}


void Edge::render(SDL_Renderer *renderer, TTF_Font *font, SDL_Color color) const{
    const float pi = 2 * acos(0.0f);
    float midX = (dest.xPos + source.xPos)/2;
    float midY = (dest.yPos + source.yPos)/2;
    float slope = (midX - source.yPos)/(dest.xPos - source.xPos);
    float c = source.yPos - (slope * source.xPos);
    float dist = (dest.xPos - source.xPos) * (dest.xPos - source.xPos) + (dest.yPos - source.yPos) * (dest.yPos - source.yPos);
    float distance=std::sqrt(dist);
    float vecX = 20 * (source.xPos - midX)/distance;
    float vecY = 20 * (source.yPos - midY)/distance;
    int radius=source.radius;

    int xsource = source.xPos-(source.xPos-dest.xPos)*radius / distance;
    int ysource = source.yPos-(source.yPos-dest.yPos)/distance*radius;
    int xdest  = dest.xPos+(source.xPos-dest.xPos)/distance*radius;
    int ydest  = dest.yPos+(source.yPos-dest.yPos)/distance*radius;
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.g, SDL_ALPHA_OPAQUE);
    drawline(renderer, xsource, ysource, xdest, ydest);
    drawline(renderer, midX, midY, midX+(vecX*cos(pi/4)-vecY*sin(pi/4)), midY+(vecX*sin(pi/4)+vecY*cos(pi/4)));
    drawline(renderer, midX, midY, midX+(vecX*cos(-pi/4)-vecY*sin(-pi/4)), midY+(vecX*sin(-pi/4)+vecY*cos(-pi/4)));//    SDL_RenderDrawLine(renderer, xsource, ysource, xdest, ydest);
//    SDL_RenderDrawLine(renderer, xsource+1, ysource, xdest+1, ydest);
//    SDL_RenderDrawLine(renderer, xsource, ysource+1, xdest, ydest+1);
//    SDL_RenderDrawLine(renderer, xsource-1, ysource, xdest-1, ydest);
//    SDL_RenderDrawLine(renderer, xsource, ysource-1, xdest, ydest-1);
//    SDL_RenderDrawLine(renderer, midX, midY, midX+(vecX*cos(pi/4)-vecY*sin(pi/4)), midY+(vecX*sin(pi/4)+vecY*cos(pi/4)));
//    SDL_RenderDrawLine(renderer, midX, midY, midX+(vecX*cos(-pi/4)-vecY*sin(-pi/4)), midY+(vecX*sin(-pi/4)+vecY*cos(-pi/4)));

    Texture texture;
    texture.loadFromText(renderer, std::to_string(weight), {216, 222, 233}, font);
//    texture.render(renderer, midX + 2 * vecX, midY + 2 * vecY);
    if(weight != -1)
        texture.render(renderer, static_cast<int>(midX) + 5, static_cast<int>(midY) + 3);
}


