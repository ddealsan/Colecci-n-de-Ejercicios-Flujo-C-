#include <iostream>
#include <string>
#include "matematicas.h"
using namespace std;
using namespace Matematicas;

int main()
{ // Ejercicio 1
    cout << "Suma " << suma(5,3) << endl;
    cout << "Resta " << resta(5,3) << endl;
    cout << "Multiplicacion " << multiplicacion(5,3) << endl;
    cout << "Division " << division(5,3) << endl;
    cout << "Raiz cuadrada " << raizCuadrada(5) << endl;
    cout << "Potencia " << potencia(5,3) << endl;
    cout << "Logaritmo " << logaritmo(5) << endl;
}