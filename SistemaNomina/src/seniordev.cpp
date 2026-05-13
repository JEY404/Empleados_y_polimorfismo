#include "seniordev.h"
#include <string>
#include "empleado.h"

SeniorDev::SeniorDev(std::string nombre, int id, double salarioBase)
: Empleado (nombre, id, salarioBase){};
double SeniorDev:: calcularSalario() const
{
    return (salarioBase+(salarioBase*0.2));
};
