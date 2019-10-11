#ifndef VECTOR_H
#define VECTOR_H
#include "Elemento.h"
#include "Lector.h"

typedef Elemento Objeto;


class Vector
{
    public:
        Vector();
        Vector(int);
        void cargar();
        void menuMuestreo();
        virtual ~Vector();

    protected:

    private:
        int cantidad;
        Objeto* objetos;
        Lector* lector;
};

#endif // VECTOR_H
