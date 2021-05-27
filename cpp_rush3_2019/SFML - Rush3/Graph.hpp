/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** Plot.hpp
*/

#ifndef PLOT_HPP
#define PLOT_HPP

#include <vector>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Plot/plot.hpp"

class Graph : public sf::Drawable
{
public:
    Graph(std::string const &title, std::string const &xLabel, std::string const &yLabel, sf::Vector2f pos);
    ~Graph() = default;

    void setPosition(sf::Vector2f pos) noexcept;
    void setSize(sf::Vector2f size) noexcept;

    void update(int const percent) noexcept;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
    
private:
    sf::plot::Plot _plot;
};

#endif /* Plot_HPP */
