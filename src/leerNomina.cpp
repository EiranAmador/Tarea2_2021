#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "leerNomina.h"

leerNomina::leerNomina(std::string dirArchivo){

    this->dirArchivo = dirArchivo;
}

int leerNomina::leer()
{
    std::ifstream ifs(dirArchivo, std::ifstream::in);

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo " << dirArchivo << std::endl;
        return -1;
    }
    
    std::string linea {}; 

    int id {0};
    double pagoBruto {0};

    while (std::getline(ifs, linea)) {
        
        std::istringstream stream(linea);

        id = 0;
        pagoBruto = 0;

        stream >> id >> pagoBruto;
    }

    ifs.close();

    return 0;
}