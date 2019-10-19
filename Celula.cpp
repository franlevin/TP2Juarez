#include "Celula.h"
Celula::Celula()
{
    tamanio=0; cantEnzimas=0;cantProteinas=0;
    materialGenetico= true; unicelular = true;
    set_posX(0); set_posY(0);
}
Celula::Celula(float x,float y)
{
    tamanio = rand()%10;
    cantEnzimas = rand()%10;
    cantProteinas = rand()%10;
    materialGenetico = true;
    unicelular = true;
    set_posX(x);
    set_posY(y);
}


void Celula::set_tamanio(int t){
    tamanio = t;
}
void Celula::set_cantEnzimas(int e){
    cantEnzimas = e;
}
void Celula::set_cantProteinas(int p){
    cantProteinas = p;
}
void Celula:: set_materialGenetico(bool mg){
   materialGenetico = mg;
}
void Celula:: set_unicelular(bool u){
    unicelular = u;
}
void Celula:: set_Estado(Estado e){
    estado = e;
}

int Celula::  get_tamanio(){
    return tamanio;
}
int Celula::  get_cantEnzimas(){
    return cantEnzimas;
}
int Celula::get_cantProteinas(){
        return cantProteinas;
}
bool Celula:: get_materialGenetico(){
    return materialGenetico;
}
bool Celula::get_unicelular(){
    return unicelular;
}
Estado Celula:: get_Estado(){
    return estado;
}
