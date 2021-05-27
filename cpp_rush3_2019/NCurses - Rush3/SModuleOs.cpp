/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** ModuleOs with ncurses
*/

#include <iostream>
#include "SModuleOs.hpp"

void SModuleOs::print() const noexcept
{
    printw("\t");
    printw(_title.c_str());
    printw("\n");
    printw("OS Name:\t\t");
    printw(_osName.c_str());
    printw("\n");
    printw("Kernel name:\t\t");
    printw(_kernelName.c_str());
    printw("\n");
    printw("Hostname:\t\t");
    printw(_hostname.c_str());
    printw("\n");
    printw("Username:\t\t");
    printw(_username.c_str());
    printw("\n");
    printw("Date:\t\t\t");
    printw(_date.c_str());
    printw("\n\n");
}
