#include "empleado.h"
#include <string>
#include <iostream>

Empleado::Empleado(std::string nombre, int id, double salarioBase)
{
     this-> nombre = nombre;
     this-> id = id;
     this-> salarioBase = salarioBase;
}
Empleado::~Empleado()
{}
double Empleado::calcularSalario() const
{
    return salarioBase;
};
void Empleado::mostrarDatos() const
{
    std::cout << "Empleado: " << nombre << ", ID: " << id << '\n';
    std::cout << "Salario base: " << salarioBase << '\n';
    std::cout << "Salario: " << calcularSalario() << '\n';
    std::cout << "==================================\n";
};
