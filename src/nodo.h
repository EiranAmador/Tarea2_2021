#ifndef NODO_H
#define NODO_H

#include <vector>
#include <iostream>

class Nodo {

    int id = 0;
    std::string nombre = "";
    int idSupervisor = 0;
    std::string nombreSupervisor = "";
    double salarioBruto = 0;
    double salarioNeto = 0;
    std::vector<Nodo *> hijos;
    
    public:
    Nodo(int id, std::string& nombre, int idSupervisor, std::string nombreSupervisor, double salarioBruto, double salarioNeto);
    ~Nodo();

    void AgregarHijo(Nodo *hijo);

    void cambiarNombreSupervisor(Nodo *nodo, Nodo *nodoPadre);

    std::string devolverNombre(Nodo *nodo);

    friend std::ostream& operator << (std::ostream &o, const Nodo &nodo);
};

#endif