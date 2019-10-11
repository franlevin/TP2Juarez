#include "Elemento.h"


//Dudo que sea necesario un constructor por defecto
Elemento::Elemento()
{
    tipo = "Graciela";
}

Elemento::Elemento(string n)
{
    nombre = n;
}

string Elemento::getTipo()
{
    return tipo;
}

void Elemento::setTipo(string t)
{
    tipo = t
}


void Elemento::Muestreo()
{
    //
}

Elemento::~Elemento()
{
    //dtor
}
