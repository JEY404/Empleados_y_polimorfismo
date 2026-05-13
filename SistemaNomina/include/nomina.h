#ifndef NOMINA_H
#define NOMINA_H
#include <vector>
#include "empleado.h"

class Nomina
{
    private:
        std::vector<Empleado*> empleados;
    public:
        Nomina();
        ~Nomina();
        double calcularSalarioTotal() const;
        void mostrarNomina() const;
        void agregarEmpleado(Empleado* emp);
        void inicializarDatos();
};

#endif // NOMINA_H
