/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** MainModule with SFML
*/

#include <iostream>
#include "MainModule.hpp"
#include "Error.hpp"
#include "rsrc.hpp"

static sf::Text *init_text(std::string const &str, sf::Font &font, float const pos)
{
    sf::Text *text = new sf::Text;
    text->setFont(font);
    text->setString(str);
    text->setCharacterSize(17);
    text->setPosition(sf::Vector2f{0, pos});
    return text;
}

MainModule::MainModule(std::string const data, sf::VideoMode const desktop)
{
    // Init rect
    _rect.setPosition(desktop.width / 3.0f, 5);
    _rect.setSize(sf::Vector2f(desktop.width / 3.0f, 75));
    _rect.setFillColor(sf::Color{255, 44, 44, 0});
    _rect.setOutlineColor(sf::Color{255, 44, 44, 255});
    _rect.setOutlineThickness(3);

    // Parse data
    parse(data);
    std::vector<std::string> parser {"Sosoh", "100", "0"};
    
    // Init texts
    if (!_font.loadFromFile(ARIAL))
	throw Error{std::string{"Impossible to load: "} + ARIAL};
    float y = 10;
    float const rightBorder = _rect.getPosition().x + _rect.getSize().x;
    float const leftBorder = _rect.getPosition().x;
    _texts.push_back(*init_text(parser[0], _font, y));
    y += 17;
    _texts.push_back(*init_text("CPU Global:", _font, y));
    _texts.push_back(*init_text(parser[1], _font, y));
    y += 17;
    _texts.push_back(*init_text("Uptime:", _font, y));
    _texts.push_back(*init_text(parser[2], _font, y));
    setPosMiddle(_texts[0], rightBorder, _rect.getSize().x);
    setPosLeft(_texts[1], leftBorder);
    setPosRight(_texts[2], rightBorder);
    setPosLeft(_texts[3], leftBorder);
    setPosRight(_texts[4], rightBorder);
}

void MainModule::update(std::string const data) noexcept
{
    // Parse new data    (Here default)
    parse(data);
    std::locale locale;
    int cpu = std::stoi(_texts[2].getString().toAnsiString(locale)) + 1;
    int time = std::stoi(_texts[4].getString().toAnsiString(locale)) + 1;
    std::vector<std::string> parser {std::to_string(cpu), std::to_string(time)};

    // Update
    float const rightBorder = _rect.getPosition().x + _rect.getSize().x;
    sf::String s {parser[0], locale};
    _texts[2].setString(sf::String{parser[0], locale});
    _texts[4].setString(sf::String{parser[1], locale});
    setPosRight(_texts[2], rightBorder);
    setPosRight(_texts[4], rightBorder);
}

void MainModule::display(sf::RenderWindow &window) const noexcept
{
    window.draw(_rect);
    for (std::vector<sf::Text>::const_iterator it = _texts.cbegin(), et = _texts.cend(); et != it; ++it)
	window.draw(*it);
}

void MainModule::parse(std::string const data) const noexcept
{
    std::cout << data << std::endl;
}

void MainModule::setPosLeft(sf::Text &text, int const border) noexcept
{
    text.setPosition(sf::Vector2f{(float)(border + 10), text.getPosition().y});
}

void MainModule::setPosRight(sf::Text &text, int const border) noexcept
{
    sf::FloatRect textRect = text.getLocalBounds();
    text.setPosition(sf::Vector2f{border - textRect.width - 10, text.getPosition().y});
}

void MainModule::setPosMiddle(sf::Text &text, int const border, int const size) noexcept
{
    sf::FloatRect textRect = text.getLocalBounds();
    text.setPosition(sf::Vector2f{(size / 2.0f) - (textRect.width / 2.0f) + border / 2.0f,
	    text.getPosition().y});
}
