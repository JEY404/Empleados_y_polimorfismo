#ifndef LIDERESTECNICOS_H
#define LIDERESTECNICOS_H
#include "empleado.h"
#include <string>

class LideresTecnicos : public Empleado
{
    public:
        LideresTecnicos(std::string nombre, int id, double salarioBase);
        double calcularSalario() const override;
};

#endif // LIDERESTECNICOS_H
