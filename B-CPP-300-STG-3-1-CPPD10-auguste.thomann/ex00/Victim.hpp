/*
** Victim.hpp for B-CPP-300-STG-3-1-CPPD10-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 09:27:05 2021 
** Last update Fri Jan 15 09:27:05 2021 
*/

#ifndef VICTIM_HPP_
#define VICTIM_HPP_

#include <iostream>
#include <string>
#include "Victim.hpp"

class Victim
{
protected:
    const std::string name;

public:
    Victim(const std::string &);
    ~Victim();

    const std::string &getName() const;
    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &, Victim const &);

#endif