#include "CelulaS.h"
#ifndef CELULAS_H_INCLUDED
#define CELULAS_H_INCLUDED

class CelulaS : public Celula
{
private:
    string estado;
public:
    CelulaS(string,float,float);
    void set_estado();
    string get_estado(string);
};


#endif // CELULAS_H_INCLUDED
