
#include <iostream>
#include <memory>
#include <vector>

#include "FabriqueForme.hpp"

int main() {
    std::cout << "===== APPLICATION DE CREATION DES FORMES ====="
              << std::endl;

    // Le vecteur permet de stocker plusieurs formes differentes.
    std::vector<std::unique_ptr<Forme>> collection;

    try {
        // La fabrique se charge de creer les objets demandes.
        collection.push_back(FabriqueForme::creerForme("cercle"));
        collection.push_back(FabriqueForme::creerForme("carre"));
        collection.push_back(FabriqueForme::creerForme("triangle"));

        // Chaque objet est affiche grace au polymorphisme.
        for (std::size_t i = 0; i < collection.size(); ++i) {
            std::cout << "\nForme numero " << i + 1 << std::endl;
            collection[i]->afficher();
        }

        // Test d'un nom qui ne correspond a aucune forme disponible.
        std::cout << "\n===== TEST D'UNE FORME INCONNUE ====="
                  << std::endl;

        FabriqueForme::creerForme("losange");
    }
    catch (const std::invalid_argument& erreur) {
        std::cout << "Erreur detectee : " << erreur.what() << std::endl;
    }

    return 0;
}
