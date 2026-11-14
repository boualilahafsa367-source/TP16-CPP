
#ifndef STATION_METEO_HPP
#define STATION_METEO_HPP

#include <vector>
#include "Observateur.hpp"

class StationMeteo {
private:
    // Mesures actuelles de la station meteorologique.
    double temperature;
    double humidite;
    double pression;

    // Liste des observateurs abonnes a la station.
    std::vector<Observateur*> observateurs;

    // Informe tous les observateurs des nouvelles mesures.
    void notifierObservateurs() const;

public:
    StationMeteo();

    // Ajoute un observateur a la liste.
    void ajouterObservateur(Observateur* observateur);

    // Supprime un observateur de la liste.
    void retirerObservateur(Observateur* observateur);

    // Modifie les mesures et declenche les notifications.
    void definirMesures(double temp, double hum, double press);
};

#endif
