
#ifndef AFFICHAGES_HPP
#define AFFICHAGES_HPP

#include "Observateur.hpp"

// Observateur specialise dans la temperature.
class AffichageTemperature : public Observateur {
public:
    void mettreAJour(
        double temperature,
        double humidite,
        double pression
    ) override;
};

// Observateur specialise dans l'humidite.
class AffichageHumidite : public Observateur {
public:
    void mettreAJour(
        double temperature,
        double humidite,
        double pression
    ) override;
};

// Observateur specialise dans la pression atmospherique.
class AffichagePression : public Observateur {
public:
    void mettreAJour(
        double temperature,
        double humidite,
        double pression
    ) override;
};

#endif
