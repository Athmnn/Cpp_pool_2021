/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SModuleRam.hpp
*/

#ifndef SFML_MODULE_RAM
#define SFML_MODULE_RAM

#include <string>
#include <vector>
#include "Text.hpp"
#include "Graph.hpp"
//#include "ModuleRam.hpp"

class SModuleRam //: public ModuleRam
{
public:
    SModuleRam(sf::Vector2f const &pos, sf::Color const &outlineColor = sf::Color{255, 44, 44}, std::string const &font = ARIAL);
    ~SModuleRam() = default;

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
    //ProcFs::RamReport      _report;
    float                   _memoryLoad = 70;
    float                   _total = 10000;
    float                   _free = 7000;
};

#endif /*SFML_MODULE_RAM*/
