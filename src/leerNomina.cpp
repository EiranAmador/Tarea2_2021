#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "leerNomina.h"

int leerNomina::leer()
{
    std::ifstream ifs("../Nomina.txt", std::ifstream::in);

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo Nomina.txt" << std::endl;
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