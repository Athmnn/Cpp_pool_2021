/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** GKrellM.hpp
*/

#ifndef GKrellM_HPP
#define GKrellM_HPP

#include <string>
#include <vector>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "MainModule.hpp"
#include "Graph.hpp"
#include "SModuleOs.hpp"
#include "SModuleDisk.hpp"
#include "SModuleNetwork.hpp"
#include "SModuleRam.hpp"
#include "SModuleCPU.hpp"

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

    MainModule *_main;
    SModuleOs _os;
    SModuleDisk _disk;
    SModuleNetwork _network;
    SModuleRam _ram;
    SModuleCPU _cpug;
};

#endif /* GKrellM_HPP */
