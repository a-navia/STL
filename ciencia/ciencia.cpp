
#include "ciencia.h"

namespace ciencia {
    namespace fisica {
        const double velocidadLuz = 299792458;
        double calcularEnergia(double masa) {
            return masa * velocidadLuz * velocidadLuz;
        }
    }
}