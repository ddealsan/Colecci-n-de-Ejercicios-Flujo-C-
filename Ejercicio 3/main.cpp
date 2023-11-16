#include <iostream>
#include "circulo.h"
using namespace std;
using namespace Geometria;

int main() {
    cout << "Ingrese el radio del circulo para calcular el area: ";
    calcularAreaCirculo(cin, cout);
    cout << endl;
    cout << "Pulse enter para continuar... \n";
    cin.ignore();
    cin.get();

    cout << "Ingrese el radio del circulo para calcular el perimetro: ";
    calcularPerimetroCirculo(cin, cout);
    cout << endl;
    cout << "Pulse enter para continuar... \n";
    cin.ignore();
    cin.get();

    return 0;
}