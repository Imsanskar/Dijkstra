//
// Created by imsanskar on 2020-10-31.
//

#include "../includes/Edge.h"

Edge::Edge()= default;


//render method for edge
void Edge::render(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderDrawLine(renderer, source.xPos, source.yPos, dest.xPos, dest.yPos);
}
