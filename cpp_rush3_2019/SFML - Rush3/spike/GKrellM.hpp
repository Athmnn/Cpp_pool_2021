/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** GKrellM.hpp
*/

#ifndef Program_HPP
#define Program_HPP

#include <string>
#include <vector>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class GKrellM
{
public:
    GKrellM();
    ~GKrellM() = default;

    void run();
private:
    void update();
    void display();

    sf::RenderWindow _window;
    sf::Clock _clock;
    sf::RectangleShape _rectangle;
    sf::Sprite _sprite;
    sf::Texture _texture;
    sf::Font _font;
    std::vector<sf::Text> _texts;
};

#endif /* Program_HPP */
