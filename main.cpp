#include "matematicas/matematicas.h"
#include "geometria/circulo.h"
#include "geometria/triangulo.h"
#include "geometria2/circulo2.h"
#include "ciencia/ciencia.h"
#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {
    //ej1
    std::cout << "La suma es: " << matematicas::suma(5, 3) << std::endl;
    std::cout << "La resta es: " << matematicas::resta(5, 3) << std::endl;
    //ej2
    double base = 5.0, altura = 10.0, radio = 3.0;
    std::cout << "El area de un triangulo de base " << base << " y altura " << altura << " es: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;
    std::cout << "El area de un circulo de radio " << radio << " es: " << Geometria::calcularAreaCirculo(radio) << std::endl;
   //ej3
    Geometria2::Circulo2 c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;
    //ej4
    std::cout << "Energia: " << ciencia::fisica::calcularEnergia(10) << std::endl;
    //ej5
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    std::cout << "Elementos del vector: ";
    for (const auto& num : numeros) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad["Lili"] = 30;
    edad.erase("Juan");
    std::cout << "Elementos del map:\n";
    for (const auto& par : edad) {
        std::cout << par.first << ": " << par.second << "\n";
    }

    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);

    std::cout << "Elementos del set: ";
    for (const auto& elem : conjunto) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
    return 0;
}