/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SModuleHearts.hpp
*/

#ifndef SFML_MODULE_HEARTS
#define SFML_MODULE_HEARTS

#include <string>
#include <vector>
#include "Graph.hpp"

class SModuleHearts
{
public:
    SModuleHearts(int const nbr);
    ~SModuleHearts() = default;

    void setPosition(sf::Vector2f pos) noexcept;

    void update() noexcept;
    void draw(sf::RenderWindow &window) const noexcept;
    
private:
    std::vector<Graph> _graphs;
};

#endif /*SFML_MODULE_HEARTS*/
