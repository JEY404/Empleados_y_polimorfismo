#ifndef TESTER_H
#define TESTER_H
#include "empleado.h"
#include <string>

class Tester : public Empleado
{
    public:
        Tester(std::string nombre, int id, double salarioBase);
        double calcularSalario() const override;
};

#endif // TESTER_H
