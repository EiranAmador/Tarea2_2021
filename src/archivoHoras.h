#ifndef LEERHORAS_H
#define LEERHORAS_H

#include <string>

class Horas {

    std::string dirArchivo = "";

    public:
        Horas(std::string dirArchivo = "../HorasTrabajadas.txt");
        virtual double salarioHoras(int idEmpleado);
};

#endif