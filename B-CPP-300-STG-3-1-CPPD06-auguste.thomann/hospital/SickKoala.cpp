/*
** EPITECH PROJECT, 2019
** sickkoala.cpp
** File description:
** @epitech.eu
*/

#include <iostream>
#include <sstream>
#include <algorithm>
#include "SickKoala.hpp"

std::string SickKoala::getName()
{
    return (this->name);
}

SickKoala::SickKoala(std::string name)
{
    this->name = name;
}

SickKoala::~SickKoala()
{
    std ::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std ::endl;
}

void SickKoala::poke()
{
    std ::cout << "Mr." << this->name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string drug)
{
    if (drug.compare("Mars") == 0)
    {
        std::cout << "Mr." << this->name << ": Mars, and it kreogs!" << std::endl;
        return (true);
    }
    else if (drug.compare("Kinder") == 0)
    {
        std::cout << "Mr." << this->name << ": There is a toy inside!" << std::endl;
        return (true);
    }
    else
    {
        std::cout << "Mr." << this->name << ": Goerkreog!" << std::endl;
        return (false);
    }
}

void SickKoala ::overDrive(std ::string str)
{
    size_t i;
    std ::string kreo("Kreog!");

    std ::cout << "Mr." << this->name << ": ";
    while ((i = str.find(kreo)) != std ::string ::npos)
        str.replace(i, kreo.size(), "1337!");
    std ::cout << str << std ::endl;
}
