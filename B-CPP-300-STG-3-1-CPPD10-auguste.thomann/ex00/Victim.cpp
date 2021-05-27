/*
** Victim.cpp for B-CPP-300-STG-3-1-CPPD10-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 09:26:59 2021 
** Last update Fri Jan 15 09:26:59 2021 
*/

#include "Victim.hpp"

std::ostream &operator<<(std::ostream &os, Victim const &Victim)
{
    os << "I'm " << Victim.getName() << " and I like otters!" << std::endl;
    return os;
}

Victim::Victim(const std::string &name) : name(name)
{
    std::cout << "Some random victim called " << this->name << " just popped!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name
    << " just died for no apparent reason!" << std::endl;
}

const std::string &Victim::getName() const
{
    return this->name;
}

void Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}