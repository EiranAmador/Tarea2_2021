#ifndef UNIT_TEST

#include <iostream>

#include "../src/leerPersonas.h"
#include "../src/arbolEmpleados.h"

using namespace std;

int main() {   

    leerPersonas *lectura = new leerPersonas();
    arbolEmpleados *arbol = new arbolEmpleados();
    arbol = lectura->generarArbol();
    std::cout << *arbol;

    return 0;
}

#endif