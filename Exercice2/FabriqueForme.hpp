
#ifndef FABRIQUE_FORME_HPP
#define FABRIQUE_FORME_HPP

#include <memory>
#include <string>
#include "Forme.hpp"

class FabriqueForme {
public:
    // Cree une forme selon le nom fourni.
    static std::unique_ptr<Forme> creerForme(const std::string& type);
};

#endif
