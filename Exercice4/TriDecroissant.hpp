
#ifndef TRI_DECROISSANT_HPP
#define TRI_DECROISSANT_HPP

#include "StrategieTri.hpp"

class TriDecroissant : public StrategieTri {
public:
    void trier(std::vector<std::string>& donnees) const override;
};

#endif
