
#include <iostream>

#include "StationMeteo.hpp"
#include "Affichages.hpp"

int main() {
    std::cout << "===== SYSTEME DE SURVEILLANCE METEO ====="
              << std::endl;

    // Creation de la station meteorologique.
    StationMeteo station;

    // Creation des trois affichages independants.
    AffichageTemperature ecranTemperature;
    AffichageHumidite ecranHumidite;
    AffichagePression ecranPression;

    // Enregistrement des observateurs aupres de la station.
    station.ajouterObservateur(&ecranTemperature);
    station.ajouterObservateur(&ecranHumidite);
    station.ajouterObservateur(&ecranPression);

    // Premiere serie de mesures.
    std::cout << "\n--- PREMIERE MISE A JOUR ---" << std::endl;

    station.definirMesures(27.6, 46.5, 1016.8);

    // Deuxieme serie : tous les affichages sont actualises.
    std::cout << "\n--- DEUXIEME MISE A JOUR ---" << std::endl;

    station.definirMesures(18.9, 73.2, 1009.4);

    // L'affichage de l'humidite se desinscrit.
    station.retirerObservateur(&ecranHumidite);

    // La prochaine notification ne concerne plus cet affichage.
    std::cout << "\n--- APRES DESINSCRIPTION ---" << std::endl;

    station.definirMesures(22.3, 61.7, 1012.5);

    return 0;
}
