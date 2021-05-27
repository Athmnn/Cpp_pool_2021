/*
** EPITECH PROJECT, 2024
** B_CPP_300_STG_3_1_CPPD13_antony_fantapie
** File description:
** Created by antonyftp
*/

#include <iostream>
#include "Toy.hpp"

int main ()
{
    Toy ET(Toy::ALIEN, "green", "./alien.txt");
    std::cout << ET.getAscii() << std::endl;
    ET.setAscii("./buzz.txt");
    std::cout << ET.getAscii() << std::endl;
    Toy toto(ET);
    toto = ET;
    std::cout << toto.getAscii() << std::endl;
    return 0;
}