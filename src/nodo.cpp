#include "nodo.h"
#include <iostream>

Nodo::Nodo(int id, std::string& nombre, int idSupervisor, std::string nombreSupervisor, double salarioBruto, double salarioNeto)
{
    this->id = id;
    this->nombre = nombre;
    this->idSupervisor = idSupervisor;
    this->nombreSupervisor = nombreSupervisor;
    this->salarioBruto = salarioBruto;
    this->salarioNeto = salarioNeto;
}

Nodo::~Nodo()
{
    std::clog << "Borrando nodo " << this->id << std::endl;

    for (Nodo* hijo : this->hijos)
    {
        delete hijo;
    }

    std::clog << "Termina de borrar nodo " << this->id << std::endl;
}

void Nodo::AgregarHijo(Nodo *hijo) {
    this->hijos.push_back(hijo);
}

std::string Nodo::devolverNombre(Nodo *nodo){

    return Nodo::nombre;
}

void Nodo::cambiarNombreSupervisor(Nodo *nodo, Nodo *nodoPadre){

    std::string nombreSupervisor = nodoPadre->nombre;
    nodo->nombreSupervisor = nombreSupervisor;
}

std::ostream& operator << (std::ostream &o, const Nodo &nodo)
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
    for (Nodo *nodoHijo : nodo.hijos)
    {
        o << *nodoHijo;
    }

    return o;
}