/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ModuleNetwork with SFML
*/

#include <iostream>
#include "SModuleNetwork.hpp"
#include "Error.hpp"
#include "rsrc.hpp"

static Text *initText(std::string const &str, std::string const &font, sf::Vector2f const &pos, Text::Placement const place, sf::RectangleShape rect)
{
    Text *text = new Text{str, pos, font};
    text->setPlacement(place, rect);
    return text;
} 

SModuleNetwork::SModuleNetwork(sf::Vector2f const &positions, sf::Color const &outlineColor, std::string const &font)
{
    // Init rect
    _rect.setPosition(positions);
    _rect.setSize(sf::Vector2f{300, 47});
    _rect.setFillColor(sf::Color{255, 44, 44, 0});
    _rect.setOutlineColor(outlineColor);
    _rect.setOutlineThickness(3);

    // Init font
    if (!_font.loadFromFile(font))
	throw Error{std::string{"Impossible to load: "} + ARIAL};
    
    // Init title
    _title.setFont(_font);
    _title.setText(std::string{"Network"});
    _title.setCharacterSize(20);
    _title.setPosition(sf::Vector2f{positions.x, positions.y});
    _title.setPlacement(Text::MIDDLE, _rect);

    // Init texts
    sf::Vector2f pos{0, 20};
    _texts.push_back(*initText("Network Load:", ARIAL, pos, Text::LEFT, _rect));
    //std::string tmp{std::to_string(_usedDisk) + "(" + std::to_string(_usedPercentage) + "%)"};
    // Todo: Calculate percentage
    _texts.push_back(*initText(std::to_string(_networkLoad), ARIAL, pos, Text::RIGHT, _rect));
    pos.y += 17;
    
    // Init graphs
    pos.x = _rect.getPosition().x;
    _graph = new Graph{"Network plot", "Percent", "Seconds", pos};
}

void SModuleNetwork::update() noexcept
{
    // ModuleNetwork::update();
    _networkLoad = rand() % 100;

    // Update texts
    //std::string tmp{std::to_string(_usedDisk) + "(" + std::to_string(_usedPercentage) + "%)"};
    _texts[1].setText(std::to_string(_networkLoad));
    _texts[1].setPlacement(Text::RIGHT, _rect);

    // Update graphs
    _graph->update(_networkLoad);
}

void SModuleNetwork::updateDraw() noexcept
{
    // Update positions
    sf::Vector2f pos = _rect.getPosition();
    _title.setPosition(pos);
    pos.y += 20;
    _texts[0].setPosition(pos);
    _texts[1].setPosition(pos);

    // Update placement
    _title.setPlacement(Text::MIDDLE, _rect);
    _texts[0].setPlacement(Text::LEFT, _rect);
    _texts[1].setPlacement(Text::RIGHT, _rect);

    // Update graph
    pos = _rect.getPosition();
    pos.y += _rect.getSize().y;
    _graph->setPosition(pos);
}

void SModuleNetwork::draw(sf::RenderWindow &window) const noexcept
{
    // Display rect
    window.draw(_rect);

    // Display title
    _title.draw(window);

    // Display texts
    for (std::vector<Text>::const_iterator it = _texts.begin(), et = _texts.end(); et != it; ++it)
	it->draw(window);

    // Display graph
    window.draw(*_graph);
}

void SModuleNetwork::setPosition(sf::Vector2f pos) noexcept
{
    _rect.setPosition(pos);
    updateDraw();
}
