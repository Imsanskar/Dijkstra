//
// Created by sgr on 2020-11-03.
//


#include "button.h"
#include "SDL2/SDL_ttf.h"

void button::drawbutton(std::string ButtonText,SDL_Renderer *renderer, int x_pos, int y_pos, int width,int height)
{
    TTF_Init();
    SDL_Rect button_rec;
    button_rec.x=x_pos;
    button_rec.y=y_pos;
    button_rec.w=width;
    button_rec.h=height;
    SDL_RenderFillRect(renderer,&button_rec);
    TTF_Font *font=TTF_OpenFont("../Media/Fonts/font.ttf",40);
    SDL_Color fontcolour={78, 55, 225};
    SDL_Surface *Text=TTF_RenderText_Solid(font, ButtonText.c_str(), fontcolour);
    SDL_Texture *Text1=SDL_CreateTextureFromSurface(renderer,Text);
    SDL_RenderCopy(renderer,Text1,NULL,&button_rec);
    SDL_RenderPresent(renderer);
    SDL_FreeSurface(Text);
    SDL_DestroyTexture(Text1);
}

void button::outer(SDL_Renderer *renderer, int x_pos, int y_pos, int width, int height)
{
    SDL_Rect button_rec;
    button_rec.x= x_pos-5;
    button_rec.y=y_pos-5;
    button_rec.w=width;
    button_rec.h=height;
    SDL_SetRenderDrawColor(renderer,0,0,0,0);
    SDL_RenderDrawRect(renderer,&button_rec);
    SDL_RenderPresent(renderer);

}


button::button(std::string a, SDL_Renderer *renderer1, int x_pos, int y_pos, int width, int height)
{
    drawbutton(a,renderer1,x_pos,y_pos,width,height);
    SDL_RenderPresent(renderer1);
}



button ::~button()
{

}
int button::getx() {return x_pos;}
int button::gety() {return y_pos;}



