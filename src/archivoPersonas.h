#ifndef LEERPERSONAS_H
#define LEERPERSONAS_H

#include <string>

#include "arbolEmpleados.h"

class Personas{

    std::string dirArchivo = "";
    arbolEmpleados *arbol = new arbolEmpleados();

    public:

        Personas(std::string dirArchivo = "../Personas.txt");
        virtual arbolEmpleados* generarArbol();
};

#endif