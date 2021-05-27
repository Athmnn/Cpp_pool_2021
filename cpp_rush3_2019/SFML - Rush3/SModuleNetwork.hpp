/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SModuleNetwork.hpp
*/

#ifndef SFML_MODULE_NETWORK
#define SFML_MODULE_NETWORK

#include <string>
#include <vector>
#include "Text.hpp"
#include "Graph.hpp"
//#include "ModuleDisk.hpp"

class SModuleNetwork //: public ModuleDisk
{
public:
    SModuleNetwork(sf::Vector2f const &pos, sf::Color const &outlineColor = sf::Color{255, 44, 44}, std::string const &font = ARIAL);
    ~SModuleNetwork() = default;

    void setPosition(sf::Vector2f pos) noexcept;

    void update() noexcept;
    void updateDraw() noexcept;
    void draw(sf::RenderWindow &window) const noexcept;
    
private:
    sf::RectangleShape _rect;
    sf::Font _font;
    Text _title;
    std::vector<Text> _texts;
    Graph * _graph;

    // From protected
    //unsigned int            _id;
    //bool                    _status;
    //ProcFs::NetworkReport      _report;
    unsigned int            _networkLoad = 50;
};

#endif /*SFML_MODULE_NETWORK*/
