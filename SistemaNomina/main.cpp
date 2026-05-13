#include "nomina.h"
#include "seniordev.h"
#include "juniordev.h"
#include "tester.h"
#include "liderestecnicos.h"
#include <string>
#include <iostream>

int main()
{
    Nomina nomina;

    nomina.inicializarDatos();

    int opcion = 0;

    while(opcion != -1)
    {
        std::cout << "========== MENU ==========" << '\n';
        std::cout << "1. Mostrar nomina" << '\n';
        std::cout << "2. Mostrar salario total" << '\n';
        std::cout << "3. Agregar empleado" << '\n';
        std::cout << "-1. Salir" << '\n';
        std::cout << "Seleccione una opcion: ";

        std::cin >> opcion;

        switch(opcion)
        {
            case 1:
                nomina.mostrarNomina();
                break;

            case 2:
                std::cout << "Valor total de la nomina: "<< nomina.calcularSalarioTotal()<< '\n';
                break;

            case 3:
            {
                int tipo;
                std::string nombre;
                int id;
                double salario;

                std::cout << "\nTipos de empleado:" << '\n';
                std::cout << "1. JuniorDev" << '\n';
                std::cout << "2. SeniorDev" << '\n';
                std::cout << "3. Tester" << '\n';
                std::cout << "4. Lider Tecnico" << '\n';
                std::cout << "Seleccione el tipo: ";
                std::cin >> tipo;

                std::cout << "Nombre: ";
                std::cin >> nombre;

                std::cout << "ID: ";
                std::cin >> id;

                std::cout << "Salario base: ";
                std::cin >> salario;

                switch(tipo)
                {
                    case 1:
                        nomina.agregarEmpleado(new JuniorDev(nombre, id, salario));
                        break;

                    case 2:
                        nomina.agregarEmpleado(new SeniorDev(nombre, id, salario));
                        break;

                    case 3:
                        nomina.agregarEmpleado(new Tester(nombre, id, salario));
                        break;

                    case 4:
                        nomina.agregarEmpleado(new LideresTecnicos(nombre, id, salario));
                        break;

                    default:
                        std::cout << "Tipo invalido" << '\n';
                }

                break;
            }

            case -1:
                std::cout << "Saliendo del programa..." << '\n';
                break;

            default:
                std::cout << "Opcion invalida" << '\n';
        }
    }

    return 0;
}
