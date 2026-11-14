
#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "GestionnaireTri.hpp"
#include "TriCroissant.hpp"
#include "TriDecroissant.hpp"
#include "TriParLongueur.hpp"

// Affiche les elements du vecteur.
void afficherDonnees(const std::vector<std::string>& donnees) {
    for (const std::string& element : donnees) {
        std::cout << element << " | ";
    }

    std::cout << std::endl;
}

int main() {
    // Jeu de donnees personnalise pour les tests.
    const std::vector<std::string> donneesInitiales = {
        "Tameslohte",
        "Imlil",
        "Sefrou",
        "Tinghir",
        "Midelt",
        "Asilah"
    };

    std::vector<std::string> donnees = donneesInitiales;

    std::cout << "=== TEST DU PATRON STRATEGY ===" << std::endl;

    std::cout << "\nDonnees initiales :" << std::endl;
    afficherDonnees(donnees);

    // Creation du gestionnaire avec la strategie croissante.
    GestionnaireTri gestionnaire(std::make_unique<TriCroissant>());

    std::cout << "\n--- Tri croissant ---" << std::endl;
    gestionnaire.executerTri(donnees);
    afficherDonnees(donnees);

    // Remplacement de la strategie par le tri decroissant.
    gestionnaire.definirStrategie(std::make_unique<TriDecroissant>());

    donnees = donneesInitiales;

    std::cout << "\n--- Tri decroissant ---" << std::endl;
    gestionnaire.executerTri(donnees);
    afficherDonnees(donnees);

    // Changement vers la strategie basee sur la longueur.
    gestionnaire.definirStrategie(std::make_unique<TriParLongueur>());

    donnees = donneesInitiales;

    std::cout << "\n--- Tri par longueur ---" << std::endl;
    gestionnaire.executerTri(donnees);
    afficherDonnees(donnees);

    return 0;
}
