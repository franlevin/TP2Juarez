#include "Vector.h"

const int MAX_OBJETOS = 100;


Vector::Vector()
{
    objetos = new elementos[MAX_OBJETOS];
    lector = new Lector(objetos);
}


void Vector::cargar();
{
    lector -> leerArchivo();
}


void Vector::menuMuestreo();
{
    //
}


Vector::~Vector()
{
    delete lector;
    for (int i = 0; i = longInt, i++) delete vec[i];
}
