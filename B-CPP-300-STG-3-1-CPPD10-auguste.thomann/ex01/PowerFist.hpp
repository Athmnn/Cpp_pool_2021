/*
** PowerFist.hpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 14:12:25 2021 
** Last update Mon Jan 17 19:47:53 2021 
*/

#ifndef POWERFIST_HPP_
#define POWERFIST_HPP_

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist();
    ~PowerFist();
    void attack() const;
};

#endif /* !POWERFIST_HPP_ */