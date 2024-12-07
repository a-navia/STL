#include "circulo2.h"
#include <cmath>

namespace Geometria2 {
    Circulo2::Circulo2(double r) : radio(r) {}

    double Circulo2::calcularArea() const {
        return M_PI * radio * radio;
    }

    double Circulo2::calcularPerimetro() const {
        return 2 * M_PI * radio;
    }
}