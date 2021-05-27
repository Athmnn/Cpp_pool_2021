/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** Utilisation.hpp
*/

#ifndef UTILISATION_HPP
#define UTILISATION_HPP

#include <vector>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Utilisation :
{
public:
    Utilisation();
    ~Utilisation() = default;

    void update(std::string const data) noexcept;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
    
private:
    std::vector<Graph> _graphs;
    std::vector<std::Text> _texts;
};

#endif /* Utilisation_HPP */
