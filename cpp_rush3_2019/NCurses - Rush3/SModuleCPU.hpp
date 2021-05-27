/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SFML_CPUModule.hpp
*/

#ifndef SFML_MODULE_CPU
#define SFML_MODULE_CPU

#include <ncurses.h> 
#include <string>
//#include "core/ModuleCPU.hpp"

class SModuleCPU//: public CPU_Module
{
public:
    SModuleCPU() = default;
    ~SModuleCPU() = default;

    void print() const;
    void update();
    
private:
    std::string const _title = "CPU Global";

    // protected
    std::string             _model = "Lucas Model";
    unsigned int            _frequence = 100;
    unsigned int            _nbCores = 12;
    float                   _loadCPU = 50;
};

#endif /*SFML_MODULE_CPU*/
