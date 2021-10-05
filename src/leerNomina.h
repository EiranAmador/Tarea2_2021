#ifndef LEERNOMINA_H
#define LEERNOMINA_H

#include <string>

#include "lectura.h"

class leerNomina : public lectura {

    std::string dirArchivo = "../Nomina.txt";

    public:
        leerNomina(std::string dirArchivo);
        virtual int leer();
};

#endif