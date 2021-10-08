#include <gtest/gtest.h>

#include "../src/empleado.h"

namespace {
    
    TEST(EmpleadoTests, Stream_empleado) {

        std::string nombre = "Juan";
        std::string nombreSupervisor = "Pedro";
        Empleado *empleado = new Empleado(1, nombre, 1, nombreSupervisor, 500000, 450000);

        std::stringstream empleadoStream;
        empleadoStream << empleado;
        std::string empleadoString = empleadoStream.str();

        std::string stringEsperado = "1,Juan,Pedro,450000";
        
        EXPECT_EQ(stringEsperado, empleadoString);
    }

    TEST(EmpleadoTests, Obtener_nombre_empleado) {

        std::string nombre = "Juan";
        std::string nombreSupervisor = "Pedro";
        Empleado *empleado = new Empleado(1, nombre, 1, nombreSupervisor, 500000, 450000);

        std::string nombreEmpleado = empleado->devolverNombre(empleado);

        std::string nombreEsperado = "Juan";

        EXPECT_EQ(nombreEsperado, nombreEmpleado);
    }
}