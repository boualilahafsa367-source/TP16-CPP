
#include "StationMeteo.hpp"
#include <algorithm>
#include <iostream>

// Initialise les mesures a zero.
StationMeteo::StationMeteo()
    : temperature(0.0), humidite(0.0), pression(0.0) {
}

// Inscrit un nouvel observateur s'il n'est pas deja present.
void StationMeteo::ajouterObservateur(Observateur* observateur) {
    if (observateur != nullptr &&
        std::find(observateurs.begin(), observateurs.end(), observateur)
            == observateurs.end()) {

        observateurs.push_back(observateur);
    }
}

// Retire l'observateur demande sans modifier les autres.
void StationMeteo::retirerObservateur(Observateur* observateur) {
    observateurs.erase(
        std::remove(observateurs.begin(), observateurs.end(), observateur),
        observateurs.end()
    );
}

// Parcourt la liste et transmet les mesures a chaque observateur.
void StationMeteo::notifierObservateurs() const {
    for (Observateur* observateur : observateurs) {
        observateur->mettreAJour(
            temperature,
            humidite,
            pression
        );
    }
}

// Enregistre les nouvelles mesures puis informe les abonnes.
void StationMeteo::definirMesures(
    double temp,
    double hum,
    double press
) {
    temperature = temp;
    humidite = hum;
    pression = press;

    std::cout << "\nLa station a modifie ses donnees."
              << std::endl;

    notifierObservateurs();
}
