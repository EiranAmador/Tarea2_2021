#ifndef UNIT_TEST

#include <iostream>
#include <fstream>

#include "../src/leerPersonas.h"
#include "../src/arbolEmpleados.h"

using namespace std;

int main() {   

    leerPersonas *lectura = new leerPersonas();
    arbolEmpleados *arbol = new arbolEmpleados();
    arbol = lectura->generarArbol();

    ofstream archivoSalida("../Reporte.csv");
    archivoSalida << *arbol;
    archivoSalida.close();

    return 0;
}

#endif