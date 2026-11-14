
#include "TriParLongueur.hpp"
#include <algorithm>

// Classe les chaines de la plus courte a la plus longue.
// En cas de meme longueur, l'ordre alphabetique est utilise.
void TriParLongueur::trier(std::vector<std::string>& donnees) const {
    std::sort(
        donnees.begin(),
        donnees.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }

            return a.length() < b.length();
        }
    );
}
