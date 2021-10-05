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
    TEST(LecturaTest, Devolver_salario_por_nomina) {

        leerNomina lectura("../Nomina.txt");
        int resultado = lectura.salarioBruto(7);

        double resultadoEsperado = 4500.41;

        EXPECT_DOUBLE_EQ(resultadoEsperado, resultado);
    }
    TEST(LecturaTest, Devolver_salario_por_horas) {

        leerHoras lectura("../HorasTrabajadas.txt");
        int resultado = lectura.salarioHoras(473);

        double resultadoEsperado = 43.66*12;

        EXPECT_DOUBLE_EQ(resultadoEsperado, resultado);
    }
}