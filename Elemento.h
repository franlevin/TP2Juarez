#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <string>
#include <iostream>

using namespace std;


class Elemento
{
    public:
        Elemento();
        Elemento(string t);
        string getTipo();
        void muestreo();
        void setTipo(string);
        virtual ~Elemento();

    protected:

        /* El atributo tipo lo heredan todos los elementos, de manera tal que al recorrer la lista de elementos
        solo sea necesario consultar su tipo para indicarle al programa a que funciones debe llamar. */
        string tipo;
        float posX;
        float posY;

};

#endif // ELEMENTO_H
