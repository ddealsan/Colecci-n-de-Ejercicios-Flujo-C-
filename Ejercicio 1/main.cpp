#include <iostream>
#include <string>
#include "matematicas.h"
#include <sstream>
using namespace std;
using namespace Matematicas;

int main()
{ // Ejercicio 1
    int a, b;

    cout << "Ingrese dos numeros para la suma: ";
    suma(cin, cout);
    cout << endl;

    cout << "Ingrese dos numeros para la resta: ";
    resta(cin, cout);
    cout << endl;

    cout << "Ingrese dos numeros para la multiplicacion: ";
    multiplicacion(cin, cout);
    cout << endl;

    cout << "Ingrese dos numeros para la division: ";
    division(cin, cout);
    cout << endl;

    cout << "Ingrese un numero para la raiz cuadrada: ";
    raizCuadrada(cin, cout);
    cout << endl;

    cout << "Ingrese dos numeros para la potencia: ";
    potencia(cin, cout);
    cout << endl;

    cout << "Ingrese un numero para el logaritmo: ";
    logaritmo(cin, cout);
    cout << endl;
}