/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SModuleDisk.hpp
*/

#ifndef SFML_MODULE_DISK
#define SFML_MODULE_DISK

#include <ncurses.h>
#include <string>
//#include "ModuleDisk.hpp"

class SModuleDisk //: public CPU_Module
{
public:
    SModuleDisk() = default;
    ~SModuleDisk() = default;

    void print() const noexcept;
    void update();
    
private:
    std::string const _title = "Disk";

    // From protected
    //unsigned int            _id;
    //bool                    _status;
    //ProcFs::DiskReport      _report;
    float                   _totalDisk = 100;
    float                   _usedDisk = 70;
    unsigned int            _usedPercentage = 30;
};

#endif /*SFML_MODULE_DISK*/
