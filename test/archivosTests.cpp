#include <gtest/gtest.h>

#include "../src/archivoNomina.h"
#include "../src/archivoHoras.h"
#include "../src/generarArchivo.h"
#include "../src/arbolEmpleados.h"

namespace {
    
    TEST(ArchivosTests, Devolver_salario_por_nomina) {

        Nomina lectura("../Nomina.txt");
        double resultado = lectura.salarioBruto(7);

        double resultadoEsperado = 4500.41;

        EXPECT_DOUBLE_EQ(resultadoEsperado, resultado);
    }
    TEST(ArchivosTests, Devolver_salario_por_horas) {

        Horas lectura("../HorasTrabajadas.txt");
        double resultado = lectura.salarioHoras(473);

        double resultadoEsperado = 43.66*12;

        EXPECT_DOUBLE_EQ(resultadoEsperado, resultado);
    }
    TEST(ArchivosTests, Generar_archivo_csv) {

        arbolEmpleados *arbol = new arbolEmpleados();
        generarArchivo archivoSalida("../Prueba", arbol);
        int archivo = archivoSalida.generar();

        EXPECT_EQ(0, archivo);
    }
}