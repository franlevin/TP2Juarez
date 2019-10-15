#include "Elemento.h"

Elemento::Elemento()
{
    posX = 0;
    posY = 0;
}

Elemento::Elemento(float x,float y)
{
    posX = x; posY = y;
}
void Elemento::get_posX(){
    return posX;}
void Elemento::get_posY(){
    return posY }
float Elemento::set_posX(float x){
    posX =x;
    }
float Elemento::set_posY(float y){
    posY = y;
    }
