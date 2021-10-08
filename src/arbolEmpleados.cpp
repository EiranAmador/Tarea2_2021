#include <map>
#include "arbolEmpleados.h"
#include "empleado.h"
#include <string>
#include <sstream>

arbolEmpleados::arbolEmpleados() {
    
    this->raiz = nullptr;
}

arbolEmpleados::~arbolEmpleados() {

    // Este destructor arranca el proceso de destrucción de los nodos;
    if (this->raiz != nullptr)
    {
        delete this->raiz;
    }

}


void arbolEmpleados::AgregarNodo(int id, std::string nombre, int idSupervisor, double salarioBruto, double salarioNeto)
{
    std::string nombreSupervisor = "";

    Empleado *nodo = new Empleado(id, nombre, idSupervisor, nombreSupervisor, salarioBruto, salarioNeto);

    // Si idPadre = 0, es el nodo raíz
    if (idSupervisor == 0)
    {
        this->raiz = nodo;   
    }
    else
    {
        // Buscar ese nodo padre
        Empleado *nodoPadre = this->elementos.at(idSupervisor);
        nodo->cambiarNombreSupervisor(nodo, nodoPadre);
        nodoPadre->AgregarHijo(nodo);        
    }

    // Agregar nodo al índice
    this->elementos.insert(std::pair<int,Empleado *>(id, nodo));
}

std::ostream& operator << (std::ostream &o, const arbolEmpleados &arbol)
{
    Empleado* raiz = arbol.raiz;
    o << *(raiz);

    return o;
}

std::istream& operator >> (std::istream &i, arbolEmpleados &arbol)
{
    std::string linea {""};

    int id {0};
    std::string nombre {""};
    int idSupervisor {0};
    std::string nombreSupervisor {""};
    double salarioBruto = 0;
    double salarioNeto = 0;

    while (std::getline(i, linea)) {
        
        id = 0;
        nombre = "";
        idSupervisor = 0;
        nombreSupervisor = "";
        salarioBruto = 0;
        salarioNeto = 0;

        std::istringstream stream(linea); 
        stream >> id >> nombre >> idSupervisor >> nombreSupervisor >> salarioBruto >> salarioNeto;

        arbol.AgregarNodo(id, nombre, idSupervisor, salarioBruto, salarioNeto);
    }

    return i;
}