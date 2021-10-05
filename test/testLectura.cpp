#include <gtest/gtest.h>

#include "../src/leerPersonas.cpp"

namespace {
    
    TEST(LecturaTest, Leer_archivo_empleados) {

        leerPersonas lectorPersonas("../Personas.txt");
        
        int resultado = lectorPersonas.leer();

        EXPECT_EQ(0, resultado);
    }
}