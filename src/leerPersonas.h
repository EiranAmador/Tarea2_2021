#ifndef LEERPERSONAS_H
#define LEERPERSONAS_H

#include <string>

class leerPersonas{

    std::string dirArchivo = "";

    public:

        leerPersonas(std::string dirArchivo = "../Personas.txt");
        virtual int leer();
};

#endif