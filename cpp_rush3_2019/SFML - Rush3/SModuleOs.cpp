/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ModuleOs with SFML
*/

#include <iostream>
#include "SModuleOs.hpp"
#include "Error.hpp"
#include "rsrc.hpp"

static Text *initText(std::string const &str, std::string const &font, sf::Vector2f const &pos, Text::Placement const place, sf::RectangleShape rect)
{
    Text *text = new Text{str, pos, font};
    text->setPlacement(place, rect);
    return text;
} 

SModuleOs::SModuleOs(sf::Vector2f const &positions, sf::Color const &outlineColor, std::string const &font)
{
    // Init rect
    _rect.setPosition(positions);
    _rect.setSize(sf::Vector2f{300, 115});
    _rect.setFillColor(sf::Color{255, 44, 44, 0});
    _rect.setOutlineColor(outlineColor);
    _rect.setOutlineThickness(3);

    // Init font
    if (!_font.loadFromFile(font))
	throw Error{std::string{"Impossible to load: "} + ARIAL};
    
    // Init title
    _title.setFont(_font);
    _title.setText(std::string{"OS"});
    _title.setCharacterSize(20);
    _title.setPosition(sf::Vector2f{positions.x, positions.y + 10});
    _title.setPlacement(Text::MIDDLE, _rect);

    // Init texts
    sf::Vector2f pos = positions;
    pos.y += 20;
    _texts.push_back(*initText("OS Name:", ARIAL, pos, Text::LEFT, _rect));
    _texts.push_back(*initText(_osName, ARIAL, pos, Text::RIGHT, _rect));
    pos.y += 17;
    _texts.push_back(*initText("Kernel Name:", ARIAL, pos, Text::LEFT, _rect));
    _texts.push_back(*initText(_kernelName, ARIAL, pos, Text::RIGHT, _rect));
    pos.y += 17;
    _texts.push_back(*initText("Hostname:", ARIAL, pos, Text::LEFT, _rect));
    _texts.push_back(*initText(_hostname, ARIAL, pos, Text::RIGHT, _rect));
    pos.y += 17;
    _texts.push_back(*initText("Username:", ARIAL, pos, Text::LEFT, _rect));
    _texts.push_back(*initText(_username, ARIAL, pos, Text::RIGHT, _rect));
    pos.y += 17;
    _texts.push_back(*initText("Date:", ARIAL, pos, Text::LEFT, _rect));
    _texts.push_back(*initText(_date, ARIAL, pos, Text::RIGHT, _rect));
    pos.y += 17;
}

void SModuleOs::update() noexcept
{
    // ModuleOS::update();

    // Update texts
    _texts[1].setText(_osName);
    _texts[1].setPlacement(Text::RIGHT, _rect);
    _texts[3].setText(_kernelName);
    _texts[3].setPlacement(Text::RIGHT, _rect);
    _texts[5].setText(_hostname);
    _texts[5].setPlacement(Text::RIGHT, _rect);
    _texts[7].setText(_username);
    _texts[7].setPlacement(Text::RIGHT, _rect);
    _texts[9].setText(_date);
    _texts[9].setPlacement(Text::RIGHT, _rect);
}

void SModuleOs::updateDraw() noexcept
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
    pos.y += 17;
    _texts[4].setPosition(pos);
    _texts[5].setPosition(pos);
    pos.y += 17;
    _texts[6].setPosition(pos);
    _texts[7].setPosition(pos);
    pos.y += 17;
    _texts[8].setPosition(pos);
    _texts[9].setPosition(pos);

    // Update placement
    _title.setPlacement(Text::MIDDLE, _rect);
    _texts[0].setPlacement(Text::LEFT, _rect);
    _texts[1].setPlacement(Text::RIGHT, _rect);
    _texts[2].setPlacement(Text::LEFT, _rect);
    _texts[3].setPlacement(Text::RIGHT, _rect);
    _texts[4].setPlacement(Text::LEFT, _rect);
    _texts[5].setPlacement(Text::RIGHT, _rect);
    _texts[6].setPlacement(Text::LEFT, _rect);
    _texts[7].setPlacement(Text::RIGHT, _rect);
    _texts[8].setPlacement(Text::LEFT, _rect);
    _texts[9].setPlacement(Text::RIGHT, _rect);
}

void SModuleOs::draw(sf::RenderWindow &window) const noexcept
{
    // Display rect
    window.draw(_rect);

    // Display title
    _title.draw(window);

    // Display texts
    for (std::vector<Text>::const_iterator it = _texts.begin(), et = _texts.end(); et != it; ++it)
	it->draw(window);
}

void SModuleOs::setPosition(sf::Vector2f pos) noexcept
{
    _rect.setPosition(pos);
    updateDraw();
}
