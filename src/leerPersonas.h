#ifndef LEERPERSONAS_H
#define LEERPERSONAS_H

#include <string>

#include "arbolEmpleados.h"

class leerPersonas{

    std::string dirArchivo = "";
    arbolEmpleados *arbol = new arbolEmpleados();

    public:

        leerPersonas(std::string dirArchivo = "../Personas.txt");
        virtual arbolEmpleados* generarArbol();
};

#endif