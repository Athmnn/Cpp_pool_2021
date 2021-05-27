/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ModuleHearts with SFML
*/

#include <iostream>
#include <cstdlib>
#include "SModuleHearts.hpp"
#include "Error.hpp"
#include "rsrc.hpp"

SModuleHearts::SModuleHearts(int const nbr)
{
    // Init graphs
    sf::Vector2f pos{0, 300};
    for (int i = 0; nbr > i; ++i) {
	Graph tmp{std::to_string(i), "", "", pos};
	tmp.setSize(sf::Vector2f{150, 200});
	_graphs.push_back(tmp);
	if (6 == i)
	    pos.y += 200;
	pos.x += 150;
    }
}

void SModuleHearts::update() noexcept
{
    // Update graphs
    for (std::vector<Graph>::iterator it = _graphs.begin(), et = _graphs.end(); et != it; ++it)
	_graphs->update(5 + (rand() % 1)));
}

void SModuleHearts::draw(sf::RenderWindow &window) const noexcept
{
    // Display graphs
    for (std::vector<Graph>::const_iterator it = _graphs.begin(), et = _graphs.end(); et != it; ++it)
	window.draw(*it);
}

void SModuleHearts::setPosition(sf::Vector2f pos) noexcept
{
    for (int i = 0, e = _graphs.size(); e > i; ++i) {
	_graphs[i].setPosition(pos);
	if (6 == i)
	    pos.y += 200;
	pos.x += 150;
    }    
}
