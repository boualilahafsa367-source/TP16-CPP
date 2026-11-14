
#include "Carre.hpp"
#include <iostream>
#include <iomanip>

// Initialise la dimension du carre.
Carre::Carre(double c) : cote(c) {
}

// Affiche la dimension du carre.
void Carre::afficher() const {
    std::cout << "Type : Carre" << std::endl;
    std::cout << "Longueur du cote : " << std::fixed
              << std::setprecision(2) << cote << std::endl;
}
