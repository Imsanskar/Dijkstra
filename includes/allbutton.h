//
// Created by sgr on 2020-11-05.
//

#ifndef DSA_PROJECT_ALLBUTTON_H
#define DSA_PROJECT_ALLBUTTON_H
#include "iostream"
#include "vector"
#include "button.h"

class allbutton {
private:
    struct ordinate{
        int x_pos;
        int y_pos;
    };
    std::string s;
    ordinate o1;
    std::vector<ordinate> buttoncollector;
public:
    allbutton();
    ordinate selectedNode(int mouse_x,int mouse_y);
    bool isThere(int mouse_x,int mouse_y);
    void drawbutton(std::string ,SDL_Renderer *renderer1,int x_pos,int y_pos,int width=60,int height=40);


};


#endif //DSA_PROJECT_ALLBUTTON_H
