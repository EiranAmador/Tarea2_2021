#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "leerHoras.h"

leerHoras::leerHoras(std::string dirArchivo){

    this->dirArchivo = dirArchivo;
}

double leerHoras::salarioHoras(int idEmpleado)
{
    std::ifstream ifs(dirArchivo, std::ifstream::in);

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo " << dirArchivo << std::endl;
        return -1;
    }
    
    std::string linea {}; 


    int id {0};
    double montoHora {0};
    double horasLaboradas {0};

    while (std::getline(ifs, linea)) {
        
        std::istringstream stream(linea);

        id = 0;
        montoHora = 0;
        horasLaboradas = 0;

        stream >> id >> montoHora >> horasLaboradas;

        if(id == idEmpleado){

            return montoHora * horasLaboradas;
        }
    }

    ifs.close();

    return 0;
}