#ifndef Empleado_H
#define Empleado_H

#include <vector>
#include <iostream>

class Empleado {

    int id = 0;
    std::string nombre = "";
    int idSupervisor = 0;
    std::string nombreSupervisor = "";
    double salarioBruto = 0;
    double salarioNeto = 0;
    std::vector<Empleado *> hijos;
    
    public:
    Empleado(int id, std::string& nombre, int idSupervisor, std::string nombreSupervisor, double salarioBruto, double salarioNeto);
    ~Empleado();

    void AgregarHijo(Empleado *hijo);

    void cambiarNombreSupervisor(Empleado *empleado, Empleado *empleadoPadre);

    std::string devolverNombre(Empleado *empleado);

    friend std::ostream& operator << (std::ostream &o, const Empleado &Empleado);
};

#endif