#include "tester.h"
#include <string>
#include "empleado.h"

Tester::Tester(std::string nombre, int id, double salarioBase)
: Empleado (nombre, id, salarioBase){};
double Tester::calcularSalario() const
{
   return (salarioBase+(salarioBase*0.05));
};
