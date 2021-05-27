/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SModuleOS.hpp
*/

#ifndef SFML_MODULE_OS
#define SFML_MODULE_OS

#include <string>
#include <vector>
#include "Text.hpp"
#include "Graph.hpp"
//#include "ModuleOS.hpp"

class SModuleOs //: public ModuleOS
{
public:
    SModuleOs(sf::Vector2f const &pos, sf::Color const &outlineColor = sf::Color{255, 44, 44}, std::string const &font = ARIAL);
    ~SModuleOs() = default;

    void setPosition(sf::Vector2f pos) noexcept;
    
    void update() noexcept;
    void updateDraw() noexcept;
    void draw(sf::RenderWindow &window) const noexcept;
    
private:
    sf::RectangleShape _rect;
    sf::Font _font;
    Text _title;
    std::vector<Text> _texts;

    // From protected
    //unsigned int            _id;
    //bool                    _status;
    //ProcFs::SystemInfos     _report;
    std::string             _osName = "Linux";
    std::string             _kernelName = "Linux KERNEL";
    std::string             _hostname = "Sosoh";
    std::string             _username = "Lucas";
    std::string             _date = "10/01/1999";
};

#endif /*SFML_MODULE_OS*/
