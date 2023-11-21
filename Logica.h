
#ifndef PROYECTODD_LOGICA_H
#define PROYECTODD_LOGICA_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "LinkedList.h" 
#include "Calabozo.h"
#include "Monster.h"

using namespace std;

class Logica {
private:
    string fname;
    string line, name, cr, type, size, align, ac, hp;
    string nombre, ubicacion, descripcion;
    LinkedList<Monster> monsters;
    LinkedList<Calabozo> escenarios; 
public:
    void readFile();
    void readCalabozos();
    Logica();
};

#endif // PROYECTODD_LOGICA_H