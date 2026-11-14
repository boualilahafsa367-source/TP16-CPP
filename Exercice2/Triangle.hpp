
#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Forme.hpp"

class Triangle : public Forme {
private:
    double base;
    double hauteur;

public:
    // Initialise la base et la hauteur du triangle.
    Triangle(double b, double h);

    void afficher() const override;
};

#endif
