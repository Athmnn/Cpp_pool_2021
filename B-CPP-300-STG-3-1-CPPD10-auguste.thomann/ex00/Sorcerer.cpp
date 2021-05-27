/*
** Sorcerer.cpp for B-CPP-300-STG-3-1-CPPD10-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 10:27:14 2021 
** Last update Fri Jan 15 10:27:14 2021 
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : name(name), title(title)
{
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->title
    << ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string &Sorcerer::getName() const
{
    return this->name;
}

const std::string &Sorcerer::getTitle() const
{
    return this->title;
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &Sorcerer)
{
    os << "I am " << Sorcerer.getName() << ", "
    << Sorcerer.getTitle() << ", and I like ponies!" << std::endl;
    return os;
}

void Sorcerer::polymorph(Victim const &Victim) const
{
    Victim.getPolymorphed();
}