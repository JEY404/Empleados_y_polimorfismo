#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

class Empleado
{
    protected:
        std::string nombre;
        int id;
        double salarioBase;
    public:
        Empleado(std::string nombre, int id, double salarioBase);
        virtual ~Empleado();
        double virtual calcularSalario() const;
        void mostrarDatos() const;

};

#endif // EMPLEADO_H
