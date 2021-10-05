#include <gtest/gtest.h>

#include "../src/leerPersonas.cpp"
#include "../src/leerNomina.cpp"
#include "../src/leerHoras.cpp"

namespace {
    
    TEST(LecturaTest, Leer_archivo_empleados) {
        
        int resultado = leer();

        EXPECT_EQ(0, resultado);
    }
    TEST(LecturaTest, Leer_archivo_nomina) {
        
        int resultado = leer();

        EXPECT_EQ(0, resultado);
    }
    TEST(LecturaTest, Leer_archivo_horas_trabajadas) {
        
        int resultado = leer();

        EXPECT_EQ(0, resultado);
    }
}