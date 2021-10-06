#ifndef UNIT_TEST

#include <iostream>

#include "../src/leerPersonas.h"

using namespace std;

int main() {   

    leerPersonas *lectura = new leerPersonas();
    lectura->leer();

    return 0;
}

#endif