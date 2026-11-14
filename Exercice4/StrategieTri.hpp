
#ifndef STRATEGIE_TRI_HPP
#define STRATEGIE_TRI_HPP

#include <string>
#include <vector>

class StrategieTri {
public:
    // Chaque strategie doit definir sa propre methode de tri.
    virtual void trier(std::vector<std::string>& donnees) const = 0;

    // Destructeur virtuel pour une destruction correcte.
    virtual ~StrategieTri() = default;
};

#endif
