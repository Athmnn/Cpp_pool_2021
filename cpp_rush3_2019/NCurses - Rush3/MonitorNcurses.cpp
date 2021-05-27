/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** MonitorNcurses with Ncurses
*/

#include <iostream>
#include <chrono>
#include <thread>
#include "MonitorNcurses.hpp"

void MonitorNcurses::run() noexcept
{
    // Init ncurses
    initscr();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE); 

    // Loop, display and update each seconds
    int ch = 0;
    while (ch != 27) {
	print();
	ch = getch();
	std::this_thread::sleep_for(std::chrono::seconds(1));
	update();
	refresh();
	clear();
    }

    // Close ncurses
    endwin(); 
}

void MonitorNcurses::print() noexcept
{
    // Print data
    _os.print();
    _disk.print();
    _network.print();
    _ram.print();
    _cpug.print();
}

void MonitorNcurses::update() noexcept
{
    // Updata data
    _disk.update();
    _network.update();
    _ram.update();
    _cpug.update();
}
