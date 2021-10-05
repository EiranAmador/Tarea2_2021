#ifndef LEERPERSONAS_H
#define LEERPERSONAS_H

#include <string>

class leerPersonas{

    std::string dirArchivo = "../Personas.txt";

    public:

        leerPersonas(std::string dirArchivo);
        virtual int leer();
};

#endif