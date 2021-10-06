#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "leerPersonas.h"
#include "leerNomina.h"
#include "leerHoras.h"
#include "arbolEmpleados.h"

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

        std::string nombreCompleto = nombre + apellido;
        double salarioBruto {0};
        double salarioNeto {0};

        if(tipo == 1){

            leerNomina *nomina = new leerNomina();
            salarioBruto = nomina->salarioBruto(id);
            salarioNeto = salarioBruto - (salarioBruto * 0.07);
        }
        else{

            leerHoras *horas = new leerHoras();
            salarioBruto = horas->salarioHoras(id);
            salarioNeto = salarioBruto;
        }

        arbolEmpleados *arbol = new arbolEmpleados();

        arbol->AgregarNodo(id, nombreCompleto, idSupervisor, salarioBruto, salarioNeto);
    }

    ifs.close();

    return 0;
}