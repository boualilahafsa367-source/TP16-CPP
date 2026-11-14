
#include "GestionnaireTri.hpp"
#include <stdexcept>
#include <utility>

// Le gestionnaire prend possession de la strategie recue.
GestionnaireTri::GestionnaireTri(
    std::unique_ptr<StrategieTri> nouvelleStrategie
) : strategie(std::move(nouvelleStrategie)) {
    if (!strategie) {
        throw std::invalid_argument("La strategie ne peut pas etre nulle.");
    }
}

// Permet de changer de strategie pendant l'execution.
void GestionnaireTri::definirStrategie(
    std::unique_ptr<StrategieTri> nouvelleStrategie
) {
    if (!nouvelleStrategie) {
        throw std::invalid_argument("La strategie ne peut pas etre nulle.");
    }

    strategie = std::move(nouvelleStrategie);
}

// Delegue le tri a la strategie choisie.
void GestionnaireTri::executerTri(
    std::vector<std::string>& donnees
) const {
    strategie->trier(donnees);
}
