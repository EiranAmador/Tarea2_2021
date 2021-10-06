#ifndef LEERHORAS_H
#define LEERHORAS_H

#include <string>

class leerHoras {

    std::string dirArchivo = "";

    public:
        leerHoras(std::string dirArchivo = "../HorasTrabajadas.txt");
        virtual double salarioHoras(int idEmpleado);
};

#endif