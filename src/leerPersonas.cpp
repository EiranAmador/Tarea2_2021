#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "leerPersonas.h"

leerPersonas::leerPersonas(std::string dirArchivo){

    this->dirArchivo = dirArchivo;
}

int leerPersonas::leer()
{
    std::ifstream ifs(dirArchivo, std::ifstream::in);

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo " << dirArchivo << std::endl;
        return -1;
    }
    
    std::string linea {}; 

    int id {0};
    std::string nombre {""};
    std::string apellido {""};
    std::string email {""};
    int tipo {0};
    int idSupervisor {0};

    while (std::getline(ifs, linea)) {
        
        std::istringstream stream(linea);

        id = 0;
        nombre = "";
        apellido = "";
        email = "";
        0;
        0;

        stream >> id >> nombre >> apellido >> email >> tipo >> idSupervisor;
    }

    ifs.close();

    return 0;
}