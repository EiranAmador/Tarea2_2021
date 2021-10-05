#ifndef UNIT_TEST

#include <iostream>

#include "../src/leerNomina.h"

using namespace std;

int main() {   

    leerNomina *lectura = new leerNomina();
    double res = lectura->salarioBruto(7);

    return 0;
}

#endif