/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** MainModule with SFML
*/

#include <iostream>
#include "Text.hpp"
#include "Error.hpp"

Text::Text(std::string const &str, sf::Vector2f const &pos, std::string const &font) : _str{str}
{
    if (!_font.loadFromFile(font))
	throw Error{"Could not load the font"};
    _text.setFont(_font);
    _text.setString(str);
    _text.setCharacterSize(17);
    _text.setPosition(pos);
}

Text::Text(std::string const &str, Text::Placement placement, sf::RectangleShape &rect, std::string const &font) : _str{str}
{
    if (!_font.loadFromFile(font))
	throw Error{"Could not load the font"};
    _text.setFont(_font);
    _text.setString(str);
    _text.setCharacterSize(17);
    setPlacement(placement, rect);
}

void Text::setPosition(sf::Vector2f pos) noexcept
{
    _text.setPosition(pos);
}

void Text::setPlacement(Placement placement, sf::RectangleShape &rect) noexcept
{
    switch (placement) {
    case Text::LEFT:
	setToTheLeft(rect);
	break;
    case Text::MIDDLE:
	setToTheMiddle(rect);
	break;
    case Text::RIGHT:
	setToTheRight(rect);
	break;
    }
}

void Text::setColor(sf::Color color) noexcept
{
    _text.setFillColor(color);
}

void Text::setText(std::string str) noexcept
{
    _str = str;
    _text.setString(str);
}
 
void Text::setCharacterSize(unsigned int size) noexcept
{
    _text.setCharacterSize(size);
}

void Text::setFont(sf::Font font) noexcept
{
    _font = font;
    _text.setFont(_font);
}

sf::Vector2f Text::getPosition() const noexcept
{
    return _text.getPosition();
}

sf::Color Text::getColor() const noexcept
{
    return _text.getFillColor();
}

std::string Text::getString() const noexcept
{
    return _str;
}

unsigned int Text::getCharacterSize() const noexcept
{
    return _text.getCharacterSize();
}

sf::Font Text::getFont() const noexcept
{
    return _font;
}

void Text::setToTheLeft(sf::RectangleShape &rect) noexcept
{
    _text.setPosition(sf::Vector2f{(float)(rect.getPosition().x + 10), _text.getPosition().y});
}

void Text::setToTheRight(sf::RectangleShape &rect) noexcept
{
    sf::FloatRect const textRect = _text.getLocalBounds();
    _text.setPosition(sf::Vector2f{rect.getPosition().x + rect.getSize().x - textRect.width - 10, _text.getPosition().y});
}

void Text::setToTheMiddle(sf::RectangleShape &rect) noexcept
{
    sf::FloatRect const textRect = _text.getLocalBounds();
    _text.setPosition(sf::Vector2f{rect.getPosition().x + (rect.getSize().x / 2.0f) - (textRect.width / 2.0f), _text.getPosition().y});
}

void Text::draw(sf::RenderWindow &window) const noexcept
{
    window.draw(_text);
}
