#include "empleado.h"

empleado::empleado(int id, std::string nombre, std::string apellido, std::string email, int tipo, int idSupervisor){

    this->nombre = nombre;
    this->apellido = apellido;
    this->email = email;
    this->tipo = tipo;
    this->idSupervisor = idSupervisor;
}