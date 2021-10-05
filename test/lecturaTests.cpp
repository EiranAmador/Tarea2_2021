#include <gtest/gtest.h>

#include "../src/leerPersonas.h"
#include "../src/leerNomina.h"
#include "../src/leerHoras.h"

namespace {
    
    TEST(LecturaTest, Leer_archivo_empleados) {

        leerPersonas lectura("../Personas.txt");
        int resultado = lectura.leer();

        EXPECT_EQ(0, resultado);
    }
    TEST(LecturaTest, Leer_archivo_nomima) {

        leerNomina lectura("../Nomina.txt");
        int resultado = lectura.salarioBruto(1);

        EXPECT_EQ(0, resultado);
    }
    TEST(LecturaTest, Leer_archivo_horas_trabajadas) {

        leerHoras lectura("../HorasTrabajadas.txt");
        int resultado = lectura.salarioHoras(1);

        EXPECT_EQ(0, resultado);
    }
}