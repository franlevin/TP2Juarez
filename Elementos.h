#ifndef ELEMENTOS_H_INCLUDED
#define ELEMENTOS_H_INCLUDED

#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;


class Elemento
{
    public:
        Elemento();
        Elemento(float,float);
        void get_posX();
        void get_posY();
        float set_posX(float);
        float set_posY(float);
    protected:
        float posX;
        float posY;
};

#endif // ELEMENTOS_H_INCLUDED
