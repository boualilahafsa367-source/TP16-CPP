
#include "FabriqueForme.hpp"
#include "Cercle.hpp"
#include "Carre.hpp"
#include "Triangle.hpp"
#include <stdexcept>

// La fabrique choisit la classe concrete selon le type demande.
std::unique_ptr<Forme> FabriqueForme::creerForme(
    const std::string& type
) {
    if (type == "cercle") {
        return std::make_unique<Cercle>(7.25);
    }
    else if (type == "carre") {
        return std::make_unique<Carre>(6.5);
    }
    else if (type == "triangle") {
        return std::make_unique<Triangle>(8.4, 5.2);
    }

    // Une exception est levee si le type n'est pas reconnu.
    throw std::invalid_argument("Cette forme n'est pas disponible.");
}
