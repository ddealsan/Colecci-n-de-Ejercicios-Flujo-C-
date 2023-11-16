
#include "circulo.h"
#include <iostream>
using namespace std;
namespace Geometria {
    double calcularAreaCirculo(istream& in, ostream& out) {
        double radio;
        in >> radio;
        double result = 3.14 * radio * radio;
        out << result;
        return result;
    }
    double calcularPerimetroCirculo(istream& in, ostream& out) {
        double radio;
        in >> radio;
        double result = 2 * 3.14 * radio;
        out << result;
        return result;
    }
}