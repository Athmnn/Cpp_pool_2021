/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SModuleDisk.hpp
*/

#ifndef SFML_MODULE_DISK
#define SFML_MODULE_DISK

#include <string>
#include <vector>
#include "Text.hpp"
#include "Graph.hpp"
//#include "ModuleDisk.hpp"

class SModuleDisk //: public CPU_Module
{
public:
    SModuleDisk(sf::Vector2f const &pos, sf::Color const &outlineColor = sf::Color{255, 44, 44}, std::string const &font = ARIAL);
    ~SModuleDisk() = default;

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
    //ProcFs::DiskReport      _report;
    float                   _totalDisk = 100;
    float                   _usedDisk = 70;
    unsigned int            _usedPercentage = 30;
};

#endif /*SFML_MODULE_DISK*/
