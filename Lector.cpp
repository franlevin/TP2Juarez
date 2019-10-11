#include "Lector.h"
#include <sstream>

const string SPACE = " "


Lector::Lector(Elemento *v)
{
    vec = v;
    longVec = 0;
}


// Lee el archivo con los datos, y los guarda en su vector
void Lector::leerArchivo()
{
    string linea;
    int cantidad = 0

    ifstream info("info.txt");
    if(!info)
    {
        cout<<"No ha podido abrirse el archivo"<<endl;
        exit(1);
    }

    while (getline(info, linea))
    {
        guardarDatos(linea);
    }

    info.close();
}


void Lector::distinguirDatos(string linea)
{
    string palabra = primeraPalabra(linea, SPACE);

    if(palabra == "celula") armarCelula(linea);
    else if(palabra == "anticuerpo") armarAnticuerpo(linea);
    else armarDosis(linea);
}


void Lector::set_longVec(int l)
{
    longVec = l;
}


int Lector::get_longVec()
{
    return longVec;
}


string Lector::primeraPalabra(string linea)
{
    int delimIndex;
    string palabra;

    delimIndex = linea.find(SPACE);
    palabra = linea.substr(0, delimIndex);

    return palabra;
}


Celula Lector::armarCelula(string linea)
{
    string basura, tipo, posX, posY;

    stringstream ss(linea);
    ss >> basura >> tipo >> posX >> posY;

    Celula* cel = new Celula(tipo, posX, posY);
    guardarObjeto(cel);
}


Anticuerpo Lector::armarAnticuerpo(string linea)
{
    string basura, posX, posY;
    stringstream ss(linea);
    ss >> basura >> tipo >> posX >> posY;

    Anticuerpo* ac = new Anticuerpo(posX, posY);
    guardarObjeto(ac);
}


Suero Lector::armarSuero(string linea)
{
    string basura, tipo, cantidad;
    stringstream ss(linea);
    ss >> basura >> tipo >> cantidad;

    Suero* s = new Suero(tipo, cantidad);
    guardarObjeto(s);
}


void Lector::guardarObjeto(Elemento* e)
{
    vec[longInt] = e;
    longInt ++;
}


Lector::~Lector()
{
    //dtor
}
