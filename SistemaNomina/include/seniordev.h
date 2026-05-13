#ifndef SENIORDEV_H
#define SENIORDEV_H
#include "empleado.h"
#include <string>

class SeniorDev : public Empleado
{
    public:
        SeniorDev(std::string nombre, int id, double salarioBase);
        double calcularSalario() const override;
};

#endif // SENIORDEV_H
