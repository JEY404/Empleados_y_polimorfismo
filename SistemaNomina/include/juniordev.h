#ifndef JUNIORDEV_H
#define JUNIORDEV_H
#include "empleado.h"
#include <string>

class JuniorDev : public Empleado
{
    public:
        JuniorDev(std::string nombre, int id, double salarioBase);
        double calcularSalario() const override;

};
#endif // JUNIORDEV_H
