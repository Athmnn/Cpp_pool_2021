/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ModuleDisk with SFML
*/

#include <iostream>
#include "SModuleDisk.hpp"
#include "Error.hpp"
#include "rsrc.hpp"

static Text *initText(std::string const &str, std::string const &font, sf::Vector2f const &pos, Text::Placement const place, sf::RectangleShape rect)
{
    Text *text = new Text{str, pos, font};
    text->setPlacement(place, rect);
    return text;
} 

SModuleDisk::SModuleDisk(sf::Vector2f const &positions, sf::Color const &outlineColor, std::string const &font)
{
    // Init rect
    _rect.setPosition(positions);
    _rect.setSize(sf::Vector2f{300, 64});
    _rect.setFillColor(sf::Color{255, 44, 44, 0});
    _rect.setOutlineColor(outlineColor);
    _rect.setOutlineThickness(3);

    // Init font
    if (!_font.loadFromFile(font))
	throw Error{std::string{"Impossible to load: "} + ARIAL};
    
    // Init title
    _title.setFont(_font);
    _title.setText(std::string{"Disk"});
    _title.setCharacterSize(20);
    _title.setPosition(sf::Vector2f{positions.x, positions.y + 10});
    _title.setPlacement(Text::MIDDLE, _rect);

    // Init texts
    sf::Vector2f pos = positions;
    pos.y += 20;
    _texts.push_back(*initText("Total:", ARIAL, pos, Text::LEFT, _rect));
    _texts.push_back(*initText(std::to_string(_totalDisk), ARIAL, pos, Text::RIGHT, _rect));
    pos.y += 17;
    _texts.push_back(*initText("Used:", ARIAL, pos, Text::LEFT, _rect));
    std::string tmp{std::to_string(_usedDisk) + "(" + std::to_string(_usedPercentage) + "%)"};
    _texts.push_back(*initText(tmp, ARIAL, pos, Text::RIGHT, _rect));
    pos.y += 17;
    
    // Init graphs
    pos.x = _rect.getPosition().x;
    _graph = new Graph{"Disk plot", "Percent", "Seconds", pos};
}

void SModuleDisk::update() noexcept
{
    // ModuleDisk::update();
    _usedDisk = rand() % 100;
    _usedPercentage = _totalDisk - _usedDisk;

    // Update texts
    _texts[1].setText(std::to_string(_totalDisk));
    _texts[1].setPlacement(Text::RIGHT, _rect);
    std::string tmp{std::to_string(_usedDisk) + "(" + std::to_string(_usedPercentage) + "%)"};
    _texts[3].setText(tmp);
    _texts[3].setPlacement(Text::RIGHT, _rect);

    // Update graphs
    _graph->update(_usedPercentage);
}

void SModuleDisk::updateDraw() noexcept
{
    // Update positions
    sf::Vector2f pos = _rect.getPosition();
    _title.setPosition(pos);
    pos.y += 20;
    _texts[0].setPosition(pos);
    _texts[1].setPosition(pos);
    pos.y += 17;
    _texts[2].setPosition(pos);
    _texts[3].setPosition(pos);

    // Update placement
    _title.setPlacement(Text::MIDDLE, _rect);
    _texts[0].setPlacement(Text::LEFT, _rect);
    _texts[1].setPlacement(Text::RIGHT, _rect);
    _texts[2].setPlacement(Text::LEFT, _rect);
    _texts[3].setPlacement(Text::RIGHT, _rect);

    // Update graph
    pos = _rect.getPosition();
    pos.y += _rect.getSize().y;
    _graph->setPosition(pos);
}

void SModuleDisk::draw(sf::RenderWindow &window) const noexcept
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

void SModuleDisk::setPosition(sf::Vector2f pos) noexcept
{
    _rect.setPosition(pos);
    updateDraw();
}
