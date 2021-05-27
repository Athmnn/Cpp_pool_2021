/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** Program.hpp
*/

#ifndef Program_HPP
#define Program_HPP

#include <string>
#include <unordered_map>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Program
{
public:
    Program(std::string const name);
    ~Program() = default;

    void display(sf::RenderWindow const &window) const noexcept;
private:
    std::string const _name;
    sf::Font _font;
    std::unordered_map<std::string, sf::Text> _texts;
    // class Data
};

#endif /* Program_HPP */
