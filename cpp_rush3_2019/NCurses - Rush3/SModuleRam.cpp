/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ModuleRam with SFML
*/

#include <iostream>
#include "SModuleRam.hpp"

void SModuleRam::print() const noexcept
{
    printw("\t");
    printw(_title.c_str());
    printw("\n");
    printw("Total:\t\t\t");
    printw(std::string{std::to_string(_total)}.c_str());
    printw("\n");
    printw("Free:\t\t\t");
    printw(std::string{std::to_string(_free)}.c_str());
    printw("\n");
    printw("Allocated:\t\t");
    printw(std::string{std::to_string(_total - _free)}.c_str());
    printw("\n");
    printw("Memory Load:\t\t");
    printw(std::string{std::to_string(_memoryLoad) + "%"}.c_str());
    printw("\n\n");
}

void SModuleRam::update()
{
    _free = rand() % 10000;
    _memoryLoad = (_free / _total) * 100;
}
   
