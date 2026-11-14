
#include "TriCroissant.hpp"
#include <algorithm>

// Classe les chaines par ordre alphabetique croissant.
void TriCroissant::trier(std::vector<std::string>& donnees) const {
    std::sort(donnees.begin(), donnees.end());
}
