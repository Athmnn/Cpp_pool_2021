/*
** Skat.cpp for day07 in /home/auguste/delivery/tek2/CPP_pool/day07/B-CPP-300-STG-3-1-CPPD07A-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 13 20:21:48 2021 
** Last update Thu Jan 13 21:41:26 2021 
*/

#include "Skat.hpp"

Skat::Skat(std::string const &name, int paks)
{
    this->_name = name;
    this->_stimPaks = paks;
}

Skat::Skat(std::string const &name)
{
    this->_name = name;
    this->_stimPaks = 15;
}

Skat::Skat(int paks)
{
    this->_name = "bob";
    this->_stimPaks = paks;
}

Skat::Skat()
{
    this->_name = "bob";
    this->_stimPaks = 15;
}

Skat::~Skat()
{
}

int &Skat::stimPaks()
{
    return (this->_stimPaks);
}

const std::string &Skat::name() const
{
    return (this->_name);
}

void Skat::shareStimPaks(int nb, int &stock)
{

    if (nb <= this->_stimPaks)
    {
        stock += nb;
        this->_stimPaks -= nb;
        std::cout << "Keep the change." << std::endl;
    }
    else
        std::cout << "Don't be greedy" << std::endl;
}

void Skat::addStimPaks(unsigned int nb)
{
    if (nb == 0)
        std::cout << "Hey boya, did you forget something?" << std::endl;
    else
        this->_stimPaks += nb;
}

void Skat::useStimPaks()
{

    if (this->_stimPaks == 0)
        std::cout << "Mediiiiiic" << std::endl;
    else
    {
        this->_stimPaks -= 1;
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    }
}

void Skat::status() const
{
    std::cout << "Soldier " << this->_name << "reporting "
    << this->_stimPaks << " stimpaks remaining sir!" << std::endl;
}