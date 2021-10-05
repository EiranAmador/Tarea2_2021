#ifndef LEERNOMINA_H
#define LEERNOMINA_H

#include <string>

class leerNomina{

    std::string dirArchivo = "../Nomina.txt";

    public:
        leerNomina(std::string dirArchivo = "../Nomina.txt");
        virtual double salarioBruto(int idEmpleado);
};

#endif