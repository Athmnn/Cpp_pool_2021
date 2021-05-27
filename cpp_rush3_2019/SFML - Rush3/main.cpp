/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** Rush3 - SFML part
*/

#include <iostream>
#include "GKrellM.hpp"
#include "Error.hpp"

int main()
{
    try {
	GKrellM htop{};
	htop.run();
    }
    catch (Error const &err) {
	std::cerr << err.what() << std::endl;
    }
    catch (std::exception &except) {
	std::cerr << except.what() << std::endl;
    }
    return 0;
}
//g++ *.cpp -lsfml-graphics -lsfml-window -lsfml-system -g
