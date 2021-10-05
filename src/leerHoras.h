#ifndef LEERHORAS_H
#define LEERHORAS_H

#include <string>

#include "lectura.h"

class leerHoras : public lectura {

    std::string dirArchivo = "../HorasTrabajadas.txt";

    public:
        leerHoras(std::string dirArchivo);
        virtual int leer();
};

#endif