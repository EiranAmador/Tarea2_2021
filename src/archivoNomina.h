#ifndef LEERNOMINA_H
#define LEERNOMINA_H

#include <string>

class Nomina{

    std::string dirArchivo = "";

    public:
        Nomina(std::string dirArchivo = "../Nomina.txt");
        virtual double salarioBruto(int idEmpleado);
};

#endif