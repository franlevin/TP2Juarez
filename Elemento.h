#ifndef ELEMENTO_H
#define ELEMENTO_H
#include <string>
#include <iostream>

using namespace std;


class Elemento
{
    public:
        Elemento();
        Elemento(string n);
        virtual ~Elemento();
        string getNombre();
        void setNombre(string);

    protected:

        float posX;
        float posY;

};

#endif // ELEMENTO_H
