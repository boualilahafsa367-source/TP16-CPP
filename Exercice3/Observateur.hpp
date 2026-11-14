
#ifndef OBSERVATEUR_HPP
#define OBSERVATEUR_HPP

class Observateur {
public:
    // Recoit les trois mesures transmises par la station.
    virtual void mettreAJour(
        double temperature,
        double humidite,
        double pression
    ) = 0;

    // Destructeur virtuel pour une destruction correcte.
    virtual ~Observateur() = default;
};

#endif
