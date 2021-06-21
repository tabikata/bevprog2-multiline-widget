#ifndef WIDGETS_HPP_INCLUDED
#define WIDGETS_HPP_INCLUDED

#include "graphics.hpp"
#include <vector>
#include <fstream>
#include <iostream>

class Application; //elodeklaralas, azert lehetseges mert csak egy ilyen tipusu pointernek foglalunk le helyet, a pointer viszont mindig ugyanolyan hosszu

class Widget {
protected:
    Application * _parent;
    int _x, _y, _size_x, _size_y;
public:
    Widget(Application *, int x, int y, int sx, int sy);
    ~Widget(){};
    virtual bool is_selected(int mouse_x, int mouse_y);
    virtual void draw() = 0; //=> ez az osztaly egy absztrakt osztaly, soha nem fog peldanosodni
    virtual void handle(genv::event ev) = 0;
};

                                                                                                                                                                                                                                                                  //szeretnek pontlevonast kerni a beadandomra mert feltoltottem egy oktatasi segedletet sajat munka helyett :)

#endif // WIDGETS_HPP_INCLUDED
