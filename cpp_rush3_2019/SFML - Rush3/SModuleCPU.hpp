/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SFML_CPUModule.hpp
*/

#ifndef SFML_MODULE_CPU
#define SFML_MODULE_CPU

#include <string>
#include <vector>
#include "Graph.hpp"
#include "Text.hpp"
//#include "core/ModuleCPU.hpp"

class SModuleCPU//: public CPU_Module
{
public:
    SModuleCPU(sf::Vector2f const &positions, sf::Color const &outlineColor = sf::Color{255, 44, 44}, std::string const &font = ARIAL);
    ~SModuleCPU() = default;

    void setPosition(sf::Vector2f pos) noexcept;
    void setSize(sf::Vector2f size) noexcept;

    void update() noexcept;
    void updateDraw() noexcept;
    void draw(sf::RenderWindow &window) const;
    
private:
    sf::RectangleShape _rect;
    sf::Font _font;
    Text _title;
    std::vector<Text> _texts;
    Graph *_graph;

    //protected
    std::string             _model = "Lucas Model";
    unsigned int            _frequence = 100;
    unsigned int            _nbCores = 12;
    float                   _loadCPU = 50;
};

#endif /*SFML_MODULE_CPU*/
