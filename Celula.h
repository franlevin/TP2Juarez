#ifndef CELULA_H
#define CELULA_H
#include <iostream>
using namespace std;

typedef string Estado;

class Celula
{
    public:
        Celula();
        Celula(int, int, int, bool, bool, Estado);
        virtual ~Celula();
        void set_tamanio(int);
        void set_cantEnzimas(int);
        void set_cantProteinas(int);
        void set_materialGenetico(bool);
        void set_unicelular(bool);
        void set_Estado(Estado);
        int get_tamanio();
        int get_cantEnzimas();
        int get_cantProteinas();
        bool get_materialGenetico();
        bool get_unicelular();
        Estado get_Estado();

    private:
        int tamanio,cantEnzimas,cantProteinas;
        bool materialGenetico,unicelular;
        Estado estado;
};

#endif // CELULA_H
