#ifndef LECTOR_H
#define LECTOR_H
#include "Vector.h"
#include "Elemento.h"
#include "Celula.h"
#include "Anticuerpo.h"
#include "Suero.h"

typedef Elemento objeto;

//Se ocupa de leer el archivo con los datos, armar los objetos y guardarlos en el vector al que apunta su atributo vec
class Lector
{
    public:
        Lector(Elemento* v);
        void leerArchivo();
        string primeraPalabra(string);
        void guardarDato(objeto);
        Celula armarCelula(/* lo que necesite la celula*/);
        Anticuerpo armarAnticuerpo(/* lo que necesite el anticuerpo*/);
        Suero armarSuero(/* lo que necesite el suero*/);
        //Nanobot armarNanobot();
        virtual ~Lector();

    private:
        Vector * vec;
        int longVec;
};

#endif // LECTOR_H
