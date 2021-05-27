/*
** SuperMutant.hpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 14:12:41 2021 
** Last update Sat Jan 15 15:44:59 2021 
*/

#ifndef SUPERMUTANT_HPP_
#define SUPERMUTANT_HPP_

#include "AEnemy.hpp"

class SuperMutant : public AEnemy
{
public:
    SuperMutant();
    ~SuperMutant();
    void takeDamage(int);
};

#endif