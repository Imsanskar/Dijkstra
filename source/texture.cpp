//
// Created by imsanskar on 2020-10-31.
//
#include "../includes/texture.h"
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_ttf.h>
#include <cstddef>
#include <cstdio>

Texture::Texture(){
	texture = NULL;
	width = 0;
	height = 0;
	font = NULL;
}

bool Texture::loadFromText(SDL_Renderer *renderer, std::string text, SDL_Color color){
	free(texture);
	
	SDL_Surface *surface = TTF_RenderText_Solid(font, text.c_str(), color);

	if(!surface){
		printf("Unable to render text, SDL_TTF error:%s\n", TTF_GetError());
	}
	else{
		//create texture from surface pixels
		texture = SDL_CreateTextureFromSurface(renderer, surface);
		if(!texture){
			printf("Unable to create texture from rendered text! SDL Error: %s\n", SDL_GetError());
		}
		else{
			width = surface->w;
			height = surface->h;
		}

		//Free the old surface
		SDL_FreeSurface(surface);
	}

	return texture != NULL;
}

void Texture::setColor(Uint8 r, Uint8 g, Uint8 b, Uint8 alpha){
	//Modulate texture rgb
	SDL_SetTextureColorMod(texture, r, g, b);

	SDL_SetTextureAlphaMod(texture, alpha);
}


