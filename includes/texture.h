//
// Created by imsanskar on 2020-10-31.
//

#ifndef DSA_PROJECT_TEXTURE_H
#define DSA_PROJECT_TEXTURE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_ttf.h>
#include <string>

class Texture{
private:
	TTF_Font *font;
	int height, width;
	SDL_Texture *texture;
public:
	//Constructor
	Texture();

	//Dealloacted the memory
	~Texture();

	//load the font
	bool loadFont(std::string fontPath);

	//Creates image from font string
	bool loadFromText(SDL_Renderer *renderer, std::string text, SDL_Color color);
	
	//set color
	void setColor(Uint8 r, Uint8 g, Uint8 b, Uint8 alpha);

	//render
	void render(int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE);
};




#endif //DSA_PROJECT_TEXTURE_H
