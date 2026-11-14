
#include <iostream>
#include "Configuration.hpp"

int main() {
    std::cout << "=== TEST DU PATRON SINGLETON ===" << std::endl;

    // Recuperation de l'instance unique.
    Configuration& config1 = Configuration::getInstance();

    std::cout << "\nParametres initiaux :" << std::endl;
    config1.afficherParametres();

    // Recuperation une deuxieme fois de la meme instance.
    Configuration& config2 = Configuration::getInstance();

    // Verification que les deux references designent le meme objet.
    if (&config1 == &config2) {
        std::cout << "\nVerification : les deux references "
                  << "designent la meme instance." << std::endl;
    }

    // Modification des parametres depuis la deuxieme reference.
    config2.modifierParametres(
        "D:/Projets/TP16/config.txt",
        "utilisateur_test",
        "Projet2026"
    );

    // La modification est visible depuis la premiere reference.
    std::cout << "\nApres modification :" << std::endl;
    config1.afficherParametres();

    return 0;
}
