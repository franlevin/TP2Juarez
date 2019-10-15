#include "Elementos.h"
#include "Celula.h"
#ifndef ANTICUERPO_H_INCLUDED
#define ANTICUERPO_H_INCLUDED

class anticuerpo: public Elemento
{

public:
        anticuerpo();
        int get_posX();
        int get_posY();
        void set_posX(int);
        void set_posY(int);
};

#endif // ANTICUERPO_H_INCLUDED
