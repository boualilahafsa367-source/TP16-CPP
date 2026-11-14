
#include "Cercle.hpp"
#include <iostream>
#include <iomanip>

// Enregistre le rayon transmis lors de la creation.
Cercle::Cercle(double r) : rayon(r) {
}

// Affiche les informations propres au cercle.
void Cercle::afficher() const {
    std::cout << "Type : Cercle" << std::endl;
    std::cout << "Rayon : " << std::fixed << std::setprecision(2)
              << rayon << std::endl;
}
