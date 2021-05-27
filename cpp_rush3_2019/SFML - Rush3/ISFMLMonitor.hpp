/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** IMonitorModule.hpp
*/

#ifndef ISFML_MODULE
#define ISFML_MODULE

#include <string>
#include <vector>
#include "Graph.hpp"

class ISFMLModule
{
public:
    virtual ~ISMFLModule() = default;

    virtual void update() const = 0;
    virtual void render() const = 0;
protected:
    std::string _title;
    sf::Font *_font;
    std::vector<sf::Text> _texts;
    std::vector<Graph> _graphs;
};

#endif /*ISFML_MODULE*/
