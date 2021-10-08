#ifndef UNIT_TEST

#include <iostream>
#include <fstream>

#include "../src/archivoPersonas.h"
#include "../src/arbolEmpleados.h"
#include "../src/generarArchivo.h"

using namespace std;

int main() {   

    Personas *archivoPersonas = new Personas();
    arbolEmpleados *arbol = new arbolEmpleados();
    arbol = archivoPersonas->generarArbol();

    generarArchivo archivoSalida("../Reporte.csv", arbol);
    archivoSalida.generar();

    return 0;
}

#endif