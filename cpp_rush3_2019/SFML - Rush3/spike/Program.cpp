/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** Display of one of your programs.
*/

#include <iostream>
#include "Program.hpp"
#include "Error.hpp"
#include "rsrc.hpp"

GKrellM::GKrellM()
{
    if (!_font.loadFromFile(ARIAL))
	throw Error{std::string{"Impossible to load: "} + ARIAL};
    sf::Text text;
    text.setFont(_font);
    text.setString("Help me");
    text.setCharacterSize(17);
    _texts.push_back(text);
}

void GKrellM::run()
{
    while (_window.isOpen()) {
	update();
	display();
    }
}

void GKrellM::update()
{
    sf::Event event;
    while (_window.pollEvent(event)) {
	// Close requested event
	if (sf::Event::Closed == event.type)
	    _window.close();
    }
}

void GKrellM::display()
{
    _window.clear(sf::Color::Black);
    
    for (std::vector<sf::Text>::iterator it = _texts.begin(), et = _texts.end(); et != it; ++it)
	_window.draw(*it);

    _window.display();
}
