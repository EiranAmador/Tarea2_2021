#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "archivoPersonas.h"
#include "archivoNomina.h"
#include "archivoHoras.h"
#include "arbolEmpleados.h"

Personas::Personas(std::string dirArchivo){

    this->dirArchivo = dirArchivo;
    this->arbol = new arbolEmpleados();
}

arbolEmpleados* Personas::generarArbol()
{
    std::ifstream ifs(dirArchivo, std::ifstream::in);

    if (!ifs.is_open())
    {
        std::cerr << "Error leyendo archivo " << dirArchivo << std::endl;
    }
    
    std::string linea {""}; 

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

        std::string nombreCompleto = nombre + " " + apellido;
        double salarioBruto {0};
        double salarioNeto {0};

        if(tipo == 1){

            Nomina *nomina = new Nomina();
            salarioBruto = nomina->salarioBruto(id);
            salarioNeto = salarioBruto - (salarioBruto * 0.07);
        }
        else{

            Horas *horas = new Horas();
            salarioBruto = horas->salarioHoras(id);
            salarioNeto = salarioBruto;
        }

        this->arbol->AgregarNodo(id, nombreCompleto, idSupervisor, salarioBruto, salarioNeto);
    }

    ifs.close();

    return arbol;
}