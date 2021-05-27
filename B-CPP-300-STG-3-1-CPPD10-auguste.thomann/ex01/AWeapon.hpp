/*
** AWeapon.hpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 13:57:20 2021 
** Last update Mon Jan 17 19:52:09 2021 
*/

#ifndef AWEAPON_HPP_
#define AWEAPON_HPP_

#include <string>

class AWeapon
{
public:
    AWeapon(std::string const &, int, int);
    ~AWeapon();
    std::string const &getName() const;
    int getAPCost() const;
    int getDamage() const;
    void attack() const;

protected:
    std::string name;
    int apCost;
    int damage;
};

#endif /* !AWEAPON_HPP_ */
