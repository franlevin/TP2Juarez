#include "Elementos.h"
#include "Celula.h"
#ifndef ANTICUERPO_H_INCLUDED
#define ANTICUERPO_H_INCLUDED

class Anticuerpo: public Elemento
{

public:
        Anticuerpo(float,float);
        float get_posX();
        float get_posY();
        void set_posX(int);
        void set_posY(int);
};

#endif // ANTICUERPO_H_INCLUDED
