
#ifndef TRI_PAR_LONGUEUR_HPP
#define TRI_PAR_LONGUEUR_HPP

#include "StrategieTri.hpp"

class TriParLongueur : public StrategieTri {
public:
    void trier(std::vector<std::string>& donnees) const override;
};

#endif
