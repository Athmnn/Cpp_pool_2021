/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ISFML_Module.hpp
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
    std::Text _title;
    sf::Font *_font;
    std::vector<sf::Text> _texts;
    std::vector<Graph> _graphs;
    std::vector<std::string> _data;
};

#endif /*ISFML_MODULE*/
