
#ifndef GESTIONNAIRE_TRI_HPP
#define GESTIONNAIRE_TRI_HPP

#include <memory>
#include <vector>
#include <string>
#include "StrategieTri.hpp"

class GestionnaireTri {
private:
    // La strategie actuelle est geree par un pointeur intelligent.
    std::unique_ptr<StrategieTri> strategie;

public:
    // Initialise le gestionnaire avec une strategie.
    explicit GestionnaireTri(std::unique_ptr<StrategieTri> nouvelleStrategie);

    // Remplace la strategie utilisee.
    void definirStrategie(std::unique_ptr<StrategieTri> nouvelleStrategie);

    // Execute la strategie actuellement selectionnee.
    void executerTri(std::vector<std::string>& donnees) const;
};

#endif
