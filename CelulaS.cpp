#include "CelulaS.h"

CelulaS::CelulaS(string e,float x, float y)
{
    estado = e;
    set_posX(x);
    set_posY(y);
    set_cantEnzimas(0);
    set_cantProteinas(0);
    set_tamanio(0);
    set_materialGenetico(true);
    set_unicelular(true);
}

string CelulaS::get_estado()
{
    return this->estado
}

void CelulaS::set_estado()
{
    return estado;
}


