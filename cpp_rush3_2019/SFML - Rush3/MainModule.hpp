/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** MainModule.hpp
*/

#ifndef MAIN_MODULE_HPP
#define MAIN_MODULE_HPP

#include <string>
#include <vector>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class MainModule
{
public:
    MainModule(std::string const data, sf::VideoMode const desktop);
    ~MainModule() = default;

    void update(std::string const data) noexcept;
    //void resize(unsigned int newWidth, unsigned int newHeight);
    void display(sf::RenderWindow &window) const noexcept;
private:
    sf::RectangleShape _rect;
    sf::Font _font;
    std::vector<sf::Text> _texts;

    void parse(std::string const data) const noexcept;
    void setPosLeft(sf::Text &text, int const border) noexcept;
    void setPosRight(sf::Text &text, int const border) noexcept;
    void setPosMiddle(sf::Text &text, int const border, int const size) noexcept;
};

#endif /* MAIN_MODULE_HPP */
