
#ifndef CARRE_HPP
#define CARRE_HPP

#include "Forme.hpp"

class Carre : public Forme {
private:
    double cote;

public:
    // Initialise le carre avec la longueur de son cote.
    explicit Carre(double c);

    void afficher() const override;
};

#endif
