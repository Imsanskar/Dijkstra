//
// Created by sgr on 2020-11-03.
//


#include "Button.h"

#include <utility>
#include <texture.h>
#include "SDL2/SDL_ttf.h"

void Button::render(SDL_Renderer *renderer, TTF_Font *font)
{
    SDL_Rect button_rec;
    button_rec = {xPosition, yPosition, width, height};
    if(isClickedButton){
        SDL_Rect button_outer;
        button_outer.x= xPosition - 5;
        button_outer.y=yPosition - 5;
        button_outer.w=width + 10;
        button_outer.h=height + 10;
        SDL_SetRenderDrawColor(renderer,250,250,187,155);
        SDL_RenderDrawRect(renderer,&button_outer);
    }
    SDL_SetRenderDrawColor(renderer, 250, 250, 187, 255);
    SDL_RenderFillRect(renderer,&button_rec);
    SDL_Color fontColor={78, 55, 225};
    Texture texture;
    texture.loadFromText(renderer, text, fontColor, font);
    texture.render(renderer, xPosition + width/5, yPosition+ height/4);
}

void Button::outer(SDL_Renderer *renderer)
{

}


Button::Button(std::string _text, int x_pos, int y_pos, int _width, int _height)
{
    xPosition =x_pos;
    yPosition = y_pos;
    text = std::move(_text);
    width = _width;
    height = _height;
    isClickedButton = false;
}



Button ::~Button()
{

}
int Button::getx() const {return xPosition;}
int Button::gety() const {return yPosition;}

bool Button::isClicked(int mouse_x, int mouse_y) {
    isClickedButton = mouse_x > xPosition && mouse_x < (xPosition + width) && mouse_y > yPosition && mouse_y < (yPosition + height);
    return isClickedButton;
}



