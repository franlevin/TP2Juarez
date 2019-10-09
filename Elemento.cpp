#include "Elemento.h"

Elemento::Elemento()
{
    nombre = "Graciela";
}

Elemento::Elemento(string n)
{
    nombre = n;
}

string Elemento::getNombre()
{
    return nombre;
}

Elemento::~Elemento()
{
    //dtor
}
