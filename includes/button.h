//
// Created by sgr on 2020-11-03.
//

#ifndef DSA_PROJECT_BUTTON_H
#define DSA_PROJECT_BUTTON_H



#include "SDL2/SDL.h"
#include "iostream"

class button {
private:
    int height,width,x_pos,y_pos;
    std::string text;
    SDL_Renderer* renderer;



public:
    button();
    button(std::string ,SDL_Renderer *renderer1,int x_pos,int y_pos,int width=60,int height=40);
    bool isClicked(int mouse_x,int mouse_y);
    void drawbutton(std::string,SDL_Renderer *renderer, int x_pos,int y_pos,int width,int height);
    int getx();
    int gety();
    ~button();
    void outer(SDL_Renderer *renderer, int x_pos,int y_pos,int width=70,int height=50);



};



#endif //DSA_PROJECT_BUTTON_H
