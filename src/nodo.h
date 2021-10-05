#ifndef NODO_H
#define NODO_H

#include <vector>
#include <iostream>

class Nodo {

    int id;
    std::string nombre;
    int idSupervisor;
    std::string nombreSupervisor;
    double salarioBruto;
    double salarioNeto;
    std::vector<Nodo *> hijos;
    
    public:
    Nodo(int id, std::string nombre, int idSupervisor, std::string nombreSupervisor, double salarioBruto, double salarioNeto);
    ~Nodo();

    void AgregarHijo(Nodo *hijo);

    friend std::ostream& operator << (std::ostream &o, const Nodo &nodo);
};

#endif