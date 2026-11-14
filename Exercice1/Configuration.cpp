
#include "Configuration.hpp"
#include <iostream>

// Initialisation des parametres par defaut.
Configuration::Configuration()
    : cheminFichier("C:/Application/data/config.txt"),
      utilisateur("admin_local"),
      motDePasse("Config2026") {
}

// Creation d'une seule instance, lors du premier appel.
Configuration& Configuration::getInstance() {
    static Configuration instance;
    return instance;
}

// Affichage des informations de configuration.
void Configuration::afficherParametres() const {
    std::cout << "Chemin du fichier : " << cheminFichier << std::endl;
    std::cout << "Utilisateur : " << utilisateur << std::endl;

    // On evite d'afficher directement le mot de passe.
    std::cout << "Mot de passe : ********" << std::endl;
}

// Modification des parametres de configuration.
void Configuration::modifierParametres(
    const std::string& chemin,
    const std::string& nomUtilisateur,
    const std::string& motDePasse
) {
    cheminFichier = chemin;
    utilisateur = nomUtilisateur;
    this->motDePasse = motDePasse;
}
