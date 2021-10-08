#ifndef ARBOLEMPLEADOS_H
#define ARBOLEMPLEADOS_H

#include "empleado.h"
#include <map>
#include <iostream>

class arbolEmpleados {

    Empleado *raiz;
    std::map<int, Empleado *> elementos;

    public:
    arbolEmpleados();
    ~arbolEmpleados();
    void AgregarNodo(int id, std::string nombre, int idSupervisor, double salarioBruto, double salarioNeto);

    friend std::ostream& operator << (std::ostream &o, const arbolEmpleados &arbolEmpleados);
    friend std::istream& operator >> (std::istream &i, arbolEmpleados &arbolEmpleados);
};


#endif