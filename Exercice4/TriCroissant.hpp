
#ifndef TRI_CROISSANT_HPP
#define TRI_CROISSANT_HPP

#include "StrategieTri.hpp"

class TriCroissant : public StrategieTri {
public:
    void trier(std::vector<std::string>& donnees) const override;
};

#endif
