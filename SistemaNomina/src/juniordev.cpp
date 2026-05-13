#include "juniordev.h"
#include <string>
#include "empleado.h"

JuniorDev::JuniorDev(std::string nombre, int id, double salarioBase)
    : Empleado (nombre, id, salarioBase){};
double JuniorDev::calcularSalario() const
{
    return salarioBase;
}


