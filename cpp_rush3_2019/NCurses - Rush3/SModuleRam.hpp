/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SModuleRam.hpp
*/

#ifndef SFML_MODULE_RAM
#define SFML_MODULE_RAM

#include <ncurses.h> 
#include <string>
//#include "ModuleRam.hpp"

class SModuleRam //: public ModuleRam
{
public:
    SModuleRam() = default;
    ~SModuleRam() = default;

    void print() const noexcept;
    void update();
    
private:
    std::string const _title;

    float                   _memoryLoad = 70;
    float                   _total = 10000;
    float                   _free = 7000;
};

#endif /*SFML_MODULE_RAM*/
