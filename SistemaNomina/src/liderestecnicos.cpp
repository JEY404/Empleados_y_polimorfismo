#include "liderestecnicos.h"
#include <string>
#include "empleado.h"

LideresTecnicos::LideresTecnicos(std::string nombre, int id, double salarioBase)
: Empleado (nombre, id, salarioBase){};
double LideresTecnicos::calcularSalario() const
{
    return (salarioBase+(salarioBase*0.25));
};
