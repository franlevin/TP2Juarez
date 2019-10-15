#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED
#include <iostream>
#include "Elementos.h"

using namespace std;

class Celula : public Elemento
{
    public:
        Elemento::posX
        Elemento::posY
        Celula();
        Celula(int, int, int, bool, bool);
        void set_tamanio(int);
        void set_cantEnzimas(int);
        void set_cantProteinas(int);
        void set_materialGenetico(bool);
        void set_unicelular(bool);
        int get_tamanio();
        int get_cantEnzimas();
        int get_cantProteinas();
        bool get_materialGenetico();
        bool get_unicelular();

    private:
        int tamanio,cantEnzimas,cantProteinas;
        bool materialGenetico,unicelular;
};


#endif // CELULA_H_INCLUDED
