#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class empleado {
    
    protected:
    int id;
    std::string nombre;
    std::string apellido;
    std::string email;
    int tipo;
    int idSupervisor;

    public:

        empleado(int, std::string, std::string, std::string, int, int);
};

#endif