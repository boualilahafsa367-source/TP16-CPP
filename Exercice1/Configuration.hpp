
#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <string>

class Configuration {
private:
    // Parametres generaux de l'application.
    std::string cheminFichier;
    std::string utilisateur;
    std::string motDePasse;

    // Constructeur prive : interdit la creation directe.
    Configuration();

    // Interdire la copie de l'instance unique.
    Configuration(const Configuration&) = delete;
    Configuration& operator=(const Configuration&) = delete;

public:
    // Retourne l'unique instance de Configuration.
    static Configuration& getInstance();

    // Affiche les parametres de configuration.
    void afficherParametres() const;

    // Permet de modifier certains parametres.
    void modifierParametres(
        const std::string& chemin,
        const std::string& nomUtilisateur,
        const std::string& motDePasse
    );
};

#endif
