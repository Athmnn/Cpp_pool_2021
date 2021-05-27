/*
** Peon.hpp for B-CPP-300-STG-3-1-CPPD10-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 09:27:27 2021 
** Last update Fri Jan 15 09:27:27 2021 
*/

#ifndef _PEON_H
#define _PEON_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
protected:

    const std::string name;

public:
    Peon(const std::string &);
    ~Peon();

    const std::string &getName() const;
    virtual void getPolymorphed() const;
};

#endif
