#ifndef CIRCULO2_H
#define CIRCULO2_H

namespace Geometria2 {
    class Circulo2 {
    public:
        Circulo2(double r);
        double calcularArea() const;
        double calcularPerimetro() const;
    private:
        double radio;
    };
}

#endif // CIRCULO2_H