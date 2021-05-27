/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ModuleNetwork with SFML
*/

#include <iostream>
#include "SModuleNetwork.hpp"

void SModuleNetwork::print() const noexcept
{
    printw("\t");
    printw(_title.c_str());
    printw("\n");
    printw("Network Load:\t\t");
    printw(std::string{std::to_string(_networkLoad) + "%"}.c_str());
    printw("\n\n");
}

void SModuleNetwork::update()
{
    _networkLoad = rand() % 100;
}
