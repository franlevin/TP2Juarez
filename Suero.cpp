#include "Suero.h"

Suero::Suero(string, int){
    set_tipo(string);
    set_cantidad(int);
}

Suero::~Suero(){
    set_tipo();
    set_cantidad(0);
}
void Suero::set_tipo(string t){
    tipo = t;
}
void Suero::set_cantidad(int c){
    cantidad = c;
}

string Suero::get_tipo(){
    return tipo;
}

int Suero::get_cantidad(){
    return cantidad;
}
