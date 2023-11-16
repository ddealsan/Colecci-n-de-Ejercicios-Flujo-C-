#include <iostream>
#include "ciencias.h"

using namespace std;

int main() {
    double masa, radio, tasaCrecimiento;

    // Obtener la masa del usuario
    cout << "Ingrese la masa: ";
    cin >> masa;
    double energia = Ciencia::Fisica::energia(masa);
    cout << "Energia: " << energia << endl;
    cout << "Presione Enter para continuar...";
    cin.ignore(); // Ignora el carácter de nueva línea
    cin.get();    // Espera a que el usuario presione Enter

    // Obtener el radio del usuario
    cout << "Ingrese el radio: ";
    cin >> radio;
    double area = Ciencia::Matematicas::area_circulo(radio);
    cout << "Area: " << area << endl;
    cout << "Presione Enter para continuar...";
    cin.ignore(); // Ignora el carácter de nueva línea
    cin.get();    // Espera a que el usuario presione Enter

    // Obtener la tasa de crecimiento del usuario
    cout << "Ingrese la tasa de crecimiento: ";
    cin >> tasaCrecimiento;
    double crecimiento = Ciencia::Biologia::CalcularCrecimiento(masa, tasaCrecimiento);
    cout << "Crecimiento: " << crecimiento << endl;
    cout << "Presione Enter para continuar...";
    cin.ignore(); // Ignora el carácter de nueva línea
    cin.get();    // Espera a que el usuario presione Enter

    return 0;
}