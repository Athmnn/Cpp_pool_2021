/*
** PlasmaRifle.hpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 14:33:05 2021 
** Last update Mon Jan 17 19:46:40 2021 
*/

#ifndef PLASMARIFLE_HPP_
#define PLASMARIFLE_HPP_

#include <string>
#include <iostream>

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    ~PlasmaRifle();
    void attack() const;
};

#endif