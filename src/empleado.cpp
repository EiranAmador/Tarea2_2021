#include "empleado.h"
#include <iostream>

Empleado::Empleado(int id, std::string& nombre, int idSupervisor, std::string nombreSupervisor, double salarioBruto, double salarioNeto)
{
    this->id = id;
    this->nombre = nombre;
    this->idSupervisor = idSupervisor;
    this->nombreSupervisor = nombreSupervisor;
    this->salarioBruto = salarioBruto;
    this->salarioNeto = salarioNeto;
}

Empleado::~Empleado()
{
    std::clog << "Borrando nodo " << this->id << std::endl;

    for (Empleado* hijo : this->hijos)
    {
        delete hijo;
    }

    std::clog << "Termina de borrar nodo " << this->id << std::endl;
}

void Empleado::AgregarHijo(Empleado *hijo) {
    this->hijos.push_back(hijo);
}

std::string Empleado::devolverNombre(Empleado *nodo){

    return Empleado::nombre;
}

void Empleado::cambiarNombreSupervisor(Empleado *nodo, Empleado *nodoPadre){

    std::string nombreSupervisor = nodoPadre->nombre;
    nodo->nombreSupervisor = nombreSupervisor;
}

std::ostream& operator << (std::ostream &o, const Empleado &nodo)
{
    // Imprimir información del nodo
    o << nodo.id;
    o << ",";
    o << nodo.nombre;
    o << ",";
    o << nodo.nombreSupervisor;
    o << ",";
    o << nodo.salarioNeto;
    o << std::endl;

    // Imprimir información de cada hijo
    for (Empleado *nodoHijo : nodo.hijos)
    {
        o << *nodoHijo;
    }

    return o;
}