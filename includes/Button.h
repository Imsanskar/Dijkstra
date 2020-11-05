//
// Created by sgr on 2020-11-03.
//

#ifndef DSA_PROJECT_BUTTON_H
#define DSA_PROJECT_BUTTON_H


#include <SDL2/SDL_ttf.h>
#include "SDL2/SDL.h"
#include "iostream"

class Button {
private:
    int height,width,xPosition,yPosition;
    std::string text;
    bool isClickedButton;

public:
    Button();
    Button(std::string , int x_pos, int y_pos, int width=60, int height=40);
    bool isClicked(int mouse_x,int mouse_y);
    void render(SDL_Renderer *renderer, TTF_Font *font);
    int getx() const;
    int gety() const;
    ~Button();
    void outer(SDL_Renderer *renderer);
};



#endif //DSA_PROJECT_BUTTON_H
