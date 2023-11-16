#include <iostream>
#include "rombo.h"
#include "cuadrado.h"
#include "rectangulo.h"
#include "circulo.h"
#include "triangulo.h"
using namespace std;
using namespace Geometria;

int main() {
    double a, b, radio;

    // Obtener valores del usuario para el rombo
    cout << "Ingrese la diagonal mayor del rombo: ";
    cin >> a;
    cout << "Ingrese la diagonal menor del rombo: ";
    cin >> b;
    cout << "Area del rombo: " << area_rombo(a, b) << endl;
    cout << "Presione Enter para continuar...";
    cin.ignore(); // Ignorar el carácter de nueva línea
    cin.get();    // Espera a que el usuario presione Enter

    // Obtener valor del usuario para el cuadrado
    cout << "Ingrese el lado del cuadrado: ";
    cin >> a;
    cout << "Area del cuadrado: " << area_cuadrado(a) << endl;
    cout << "Presione Enter para continuar...";
    cin.ignore(); // Ignorar el carácter de nueva línea
    cin.get();    // Espera a que el usuario presione Enter

    // Obtener valores del usuario para el rectángulo
    cout << "Ingrese la base del rectangulo: ";
    cin >> a;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> b;
    cout << "Area del rectangulo: " << area_rectangulo(a, b) << endl;
    cout << "Presione Enter para continuar...";
    cin.ignore(); // Ignorar el carácter de nueva línea
    cin.get();    // Espera a que el usuario presione Enter

    // Obtener valor del usuario para el círculo
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    cout << "Area del circulo: " << area_circulo(radio) << endl;
    cout << "Presione Enter para continuar...";
    cin.ignore(); // Ignorar el carácter de nueva línea
    cin.get();    // Espera a que el usuario presione Enter

    // Obtener valores del usuario para el triángulo
    cout << "Ingrese la base del triangulo: ";
    cin >> a;
    cout << "Ingrese la altura del triangulo: ";
    cin >> b;
    cout << "Area del triangulo: " << area_triangulo(a, b) << endl;
    cout << "Presione Enter para continuar...";
    cin.ignore(); // Ignorar el carácter de nueva línea
    cin.get();    // Espera a que el usuario presione Enter

    return 0;
}