
#ifndef FORME_HPP
#define FORME_HPP

class Forme {
public:
    // Methode virtuelle pure commune a toutes les formes.
    virtual void afficher() const = 0;

    // Destructeur virtuel pour permettre une destruction polymorphique.
    virtual ~Forme() = default;
};

#endif
