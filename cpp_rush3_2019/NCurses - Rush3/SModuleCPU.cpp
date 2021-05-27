/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ModuleCPU with SFML
*/

#include <iostream>
#include "SModuleCPU.hpp"

void SModuleCPU::print() const
{
    printw("\t");
    printw(_title.c_str());
    printw("\n");
    printw("Model:\t");
    printw(_model.c_str());
    printw("\n");
    printw("Frequence:\t\t");
    printw(std::string{std::to_string(_frequence)}.c_str());
    printw("\n");
    printw("Nbr cores:\t\t");
    printw(std::string{std::to_string(_nbCores)}.c_str());
    printw("\n");
    printw("Load CPU:\t\t");
    printw(std::string{std::to_string(_nbCores) + "%"}.c_str());
    printw("\n\n");
}

void SModuleCPU::update()
{
    _nbCores = rand() % 12;
    _frequence = rand() % 100;
    _loadCPU = rand() % 100;
}
