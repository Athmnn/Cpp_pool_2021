/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** Graph from sfml-plot;
*/

#include <iostream>
#include "Graph.hpp"
#include "Error.hpp"
#include "rsrc.hpp"

Graph::Graph(std::string const &title, std::string const &xLabel, std::string const &yLabel, sf::Vector2f pos)
{
    _plot.setSize(sf::Vector2f(300, 200));
    _plot.setTitle(title);
    _plot.setFont(FONT);
    _plot.setXLabel(xLabel);
    _plot.setYLabel(yLabel);
    _plot.setBackgroundColor(sf::Color(255, 255, 255, 0));
    _plot.setTitleColor(sf::Color::White);
    _plot.setPosition(pos);
    sf::plot::Curve &curve = _plot.createCurve("rush3", sf::Color::Red);
    curve.setFill(1);
    curve.setThickness(2);
    curve.setColor(sf::Color(rand()%255, rand()%255, rand()%255));
    curve.setLimit(60);
}

void Graph::update(int const percent) noexcept
{
    sf::plot::Curve &curve = _plot.getCurve("rush3");
    curve.addValue(percent);
    _plot.prepare();
}

void Graph::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_plot, states);
} 

void Graph::setPosition(sf::Vector2f pos) noexcept
{
    _plot.setPosition(pos);
}

void Graph::setSize(sf::Vector2f size) noexcept
{
    _plot.setSize(size);
}
