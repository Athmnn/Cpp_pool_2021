/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** MonitorNcurses.hpp
*/

#ifndef MONITOR_NCURSES
#define MONITOR_NCURSES

#include <ncurses.h>
#include <string>
#include "SModuleOs.hpp"
#include "SModuleDisk.hpp"
#include "SModuleNetwork.hpp"
#include "SModuleRam.hpp"
#include "SModuleCPU.hpp"

class MonitorNcurses
{
public:
    MonitorNcurses() = default;
    ~MonitorNcurses() = default;

    void run() noexcept;

private:
    SModuleOs _os;
    SModuleDisk _disk;
    SModuleNetwork _network;
    SModuleRam _ram;
    SModuleCPU _cpug;

    void update() noexcept;
    void print() noexcept;
};

#endif /*MONITOR_NCURSES*/
