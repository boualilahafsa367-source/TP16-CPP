
#ifndef CERCLE_HPP
#define CERCLE_HPP

#include "Forme.hpp"

class Cercle : public Forme {
private:
    double rayon;

public:
    // Initialise le cercle avec son rayon.
    explicit Cercle(double r);

    // Redefinition de la methode de la classe abstraite.
    void afficher() const override;
};

#endif
