#include "nomina.h"
#include "juniordev.h"
#include "seniordev.h"
#include "tester.h"
#include "liderestecnicos.h"
#include <iostream>

Nomina::Nomina(){}

Nomina::~Nomina()
{
    for(Empleado* emp : empleados)
    {
        delete emp;
    }
}

void Nomina::agregarEmpleado(Empleado* emp)
{
    if(emp != nullptr)
    {
        empleados.push_back(emp);
    }
}

void Nomina::inicializarDatos()
{
    agregarEmpleado(new JuniorDev("Jose Salazar", 1, 1000));
    agregarEmpleado(new JuniorDev("Carlitos", 2, 1200));
    agregarEmpleado(new SeniorDev("Sergio", 3, 5000));
    agregarEmpleado(new SeniorDev("Pantoja", 4, 4500));
    agregarEmpleado(new Tester("Ivoncho", 5, 670));
    agregarEmpleado(new Tester("Arenas", 6, 900));
    agregarEmpleado(new LideresTecnicos("Luisa Rincon", 7, 7000));
    agregarEmpleado(new LideresTecnicos("Franco", 8, 5500));
}

double Nomina::calcularSalarioTotal() const
{
    double total = 0;

    for(Empleado* emp : empleados)
{
    total += emp->calcularSalario();
    }

    return total;
}

void Nomina::mostrarNomina() const
{
    std::cout << "========== NOMINA ==========" << '\n';

    for(Empleado* emp : empleados)
    {
        emp->mostrarDatos();
    }

    std::cout << "TOTAL NOMINA: "
              << calcularSalarioTotal()
              << '\n';
}
