#include "Elementos.h"
#ifndef SUERO_H
#define SUERO_H



class Suero: public Elemento
{
    public:
        Suero(string tipo, int cantidad);
        void set_tipo(string);
        void set_cantidad(int);
        string get_tipo()
        int get_cantidad()
        virtual ~Suero();

    private:
        string tipo;
        int cantidad;
};

#endif // SUERO_H
