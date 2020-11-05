//
// Created by sgr on 2020-11-05.
//

#include "allbutton.h"

bool allbutton:: isThere(int mouse_x,int mouse_y)
{
    for(auto butt : buttoncollector)
    {
        int x=butt.x_pos,y=butt.y_pos;
        int z=0;
        if((x<=mouse_x && mouse_x<=(x+60)) && (y<=mouse_y && mouse_y<=y+40))
        {
            return true;
        }
    }
    return false;
}
allbutton ::ordinate allbutton::selectedNode(int mouse_x,int mouse_y)
{
    for(auto butt:buttoncollector)
    {
        ordinate o1;

        int x=butt.x_pos,y=butt.y_pos;

        o1.x_pos=butt.x_pos,o1.y_pos=y;
        if((x<=mouse_x && mouse_x<=(x+60)) && (y<=mouse_y && mouse_y<=y+40))
            return o1;
    }
}

void allbutton::drawbutton(std::string a, SDL_Renderer *renderer1, int x_pos, int y_pos, int width, int height)
{
    button b1(a,renderer1,x_pos,y_pos,width,height);
    ordinate o1;
    o1.y_pos=y_pos;
    o1.x_pos=x_pos;
    buttoncollector.push_back(o1);
}
