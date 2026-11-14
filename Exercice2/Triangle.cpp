
#include "Triangle.hpp"
#include <iostream>
#include <iomanip>

// Enregistre les deux dimensions du triangle.
Triangle::Triangle(double b, double h)
    : base(b), hauteur(h) {
}

// Affiche les dimensions du triangle.
void Triangle::afficher() const {
    std::cout << "Type : Triangle" << std::endl;
    std::cout << "Base : " << std::fixed << std::setprecision(2)
              << base << std::endl;
    std::cout << "Hauteur : " << hauteur << std::endl;
}
