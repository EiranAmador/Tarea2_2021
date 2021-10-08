#ifndef UNIT_TEST

#include <iostream>
#include <fstream>

#include "../src/leerPersonas.h"
#include "../src/arbolEmpleados.h"
#include "../src/generarArchivo.h"

using namespace std;

int main() {   

    leerPersonas *lectura = new leerPersonas();
    arbolEmpleados *arbol = new arbolEmpleados();
    arbol = lectura->generarArbol();

    generarArchivo archivoSalida("../Reporte.csv", arbol);
    archivoSalida.generar();

    return 0;
}

#endif