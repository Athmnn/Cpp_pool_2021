/*
** EPITECH PROJECT, 2029
** Sarah-Keppler
** Text.hpp
*/

#ifndef TEXT_HPP
#define TEXT_HPP

#include <string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "rsrc.hpp"

class Text
{
public:
    enum Placement {
	LEFT,
	MIDDLE,
	RIGHT
    };

    Text(std::string const &str = "", sf::Vector2f const &pos = sf::Vector2f{0, 0}, std::string const &font = ARIAL);
    Text(std::string const &str, Placement placement, sf::RectangleShape &rect, std::string const &font = ARIAL);
    ~Text() = default;

    void setPosition(sf::Vector2f pos) noexcept;
    void setPlacement(Placement placement, sf::RectangleShape &rect) noexcept;
    void setColor(sf::Color color) noexcept;
    void setText(std::string str) noexcept;
    void setCharacterSize(unsigned int size) noexcept;
    void setFont(sf::Font font) noexcept;

    sf::Vector2f getPosition() const noexcept;
    sf::Color getColor() const noexcept;
    std::string getString() const noexcept;
    unsigned int getCharacterSize() const noexcept;
    sf::Font getFont() const noexcept;
    
    void setToTheRight(sf::RectangleShape &rect) noexcept;
    void setToTheLeft(sf::RectangleShape &rect) noexcept;
    void setToTheMiddle(sf::RectangleShape &rect) noexcept;
    void draw(sf::RenderWindow &window) const noexcept;
private:
    sf::Font _font;
    sf::Text _text;
    std::string _str;
};

#endif /* TEXT_HPP */
