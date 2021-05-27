/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ModuleDisk with SFML
*/

#include <iostream>
#include "SModuleDisk.hpp"

void SModuleDisk::print() const noexcept
{
    printw("\t");
    printw(_title.c_str());
    printw("\n");
    printw("Total:\t\t\t");
    printw(std::string{std::to_string(_totalDisk)}.c_str());
    printw("\n");
    printw("Used:\t\t\t");
    printw(std::string{std::to_string(_usedDisk)}.c_str());
    printw("\n");
    printw("Used percentage:\t");
    printw(std::string{std::to_string(_usedPercentage) + "%"}.c_str());
    printw("\n\n");
}

void SModuleDisk::update()
{
    _usedDisk = rand() % 100;
    _usedPercentage = _totalDisk - _usedDisk;
}
