#include <iostream>
#include <string>
#include "matematicas.h"
#include <cmath>
using namespace std;

namespace Matematicas {
    int suma(istream& in, ostream& out) {
        int a, b;
        in >> a >> b;
        out << a + b;
        return a + b;
    }
    int resta(istream& in, ostream& out) {
        int a, b;
        in >> a >> b;
        out << a - b;
        return a - b;
    }
    int multiplicacion(istream& in, ostream& out) {
        int a, b;
        in >> a >> b;
        out << a * b;
        return a * b;
    }
    double division(istream& in, ostream& out) {
        int a, b;
        in >> a >> b;
        double result = static_cast<double>(a) / b;
        out << result;
        return result;
    }
    double raizCuadrada(istream& in, ostream& out) {
        int a;
        in >> a;
        double result = sqrt(a);
        out << result;
        return result;
    }
    double potencia(istream& in, ostream& out) {
        int a, b;
        in >> a >> b;
        double result = pow(a,b);
        out << result;
        return result;
    }
    double logaritmo(istream& in, ostream& out) {
        int a;
        in >> a;
        double result = log(a);
        out << result;
        return result;
    }
};
