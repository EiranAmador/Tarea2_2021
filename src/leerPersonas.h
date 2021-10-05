#ifndef LEERPERSONAS_H
#define LEERPERSONAS_H

#include <string>

#include "lectura.h"

class leerPersonas : public lectura {

    std::string dirArchivo = "../Personas.txt";

    public:

        leerPersonas(std::string dirArchivo);
        virtual int leer();
};

#endif