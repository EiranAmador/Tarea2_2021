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
    while (std::getline(ifs, linea)) {
        
        int i = 0;

        int id = 3;
        std::string nombre = "";
        std::string apellido = "";
        std::string email = "";
        int tipo = 0;
        int idSupervisor = 0;

        std::istringstream stream(linea); 
        std::string elemento;

        while (stream >> elemento)
        {
            if(i == 0){
                
                std::stringstream elementoStream(elemento); 
                elementoStream >> id;
            }
            if(i == 1){
                
                nombre = elemento;
            }
            if(i == 2){
                
                apellido = elemento;
            }
            if(i == 3){
                
                email = elemento;
            }
            if(i == 4){
                
                std::stringstream elementoStream(elemento); 
                elementoStream >> tipo;
            }
            if(i == 5){
                
                std::stringstream elementoStream(elemento); 
                elementoStream >> idSupervisor;
            }

            i++;
        }
    }

    ifs.close();

    return 0;
}