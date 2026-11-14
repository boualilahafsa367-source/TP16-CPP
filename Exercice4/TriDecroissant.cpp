
#include "TriDecroissant.hpp"
#include <algorithm>
#include <functional>

// Classe les chaines par ordre alphabetique decroissant.
void TriDecroissant::trier(std::vector<std::string>& donnees) const {
    std::sort(
        donnees.begin(),
        donnees.end(),
        std::greater<std::string>()
    );
}
