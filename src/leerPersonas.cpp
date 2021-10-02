#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int leerPersonas()
{
    std::ifstream ifs("../Personas.txt", std::ifstream::in);

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo Personas.txt" << std::endl;
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