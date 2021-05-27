/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SModuleNetwork.hpp
*/

#ifndef SFML_MODULE_NETWORK
#define SFML_MODULE_NETWORK

#include <ncurses.h> 
#include <string>
//#include "ModuleDisk.hpp"

class SModuleNetwork //: public ModuleDisk
{
public:
    SModuleNetwork() = default;
    ~SModuleNetwork() = default;

    void print() const noexcept;
    void update();
    
private:
    std::string const _title = "Network";

    // From protected
    //unsigned int            _id;
    //bool                    _status;
    //ProcFs::NetworkReport      _report;
    unsigned int            _networkLoad = 50;
};

#endif /*SFML_MODULE_NETWORK*/
