
#include "Affichages.hpp"
#include <iostream>
#include <iomanip>

// Affiche la temperature transmise par la station.
void AffichageTemperature::mettreAJour(
    double temperature,
    double,
    double
) {
    std::cout << "[Affichage temperature] "
              << std::fixed << std::setprecision(1)
              << temperature << " degres C" << std::endl;
}

// Affiche le pourcentage d'humidite.
void AffichageHumidite::mettreAJour(
    double,
    double humidite,
    double
) {
    std::cout << "[Affichage humidite] "
              << std::fixed << std::setprecision(1)
              << humidite << " %" << std::endl;
}

// Affiche la pression atmospherique.
void AffichagePression::mettreAJour(
    double,
    double,
    double pression
) {
    std::cout << "[Affichage pression] "
              << std::fixed << std::setprecision(1)
              << pression << " hPa" << std::endl;
}
