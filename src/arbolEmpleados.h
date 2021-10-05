#ifndef ARBOLEMPLEADOS_H
#define ARBOLEMPLEADOS_H

#include "nodo.h"
#include <map>
#include <iostream>

class arbolEmpleados {

    Nodo *raiz;
    std::map<int, Nodo *> elementos;

    public:
    arbolEmpleados();
    ~arbolEmpleados();
    void AgregarNodo(int id, std::string nombre, int idSupervisor, std::string  nombreSupervisor, double salarioBruto, double salarioNeto);

    friend std::ostream& operator << (std::ostream &o, const arbolEmpleados &arbolEmpleados);
    friend std::istream& operator >> (std::istream &i, arbolEmpleados &arbolEmpleados);
};


#endif