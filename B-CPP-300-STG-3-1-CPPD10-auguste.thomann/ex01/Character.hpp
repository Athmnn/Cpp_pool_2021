/*
** Character.hpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 15:37:45 2021 
** Last update Sat Jan 15 15:38:12 2021 
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>

#include "AEnemy.hpp"
#include "AWeapon.hpp"

class Character
{
public:
    Character(std::string);
    ~Character();

    void recoverAP();
    void equip(AWeapon *);
    void attack(AEnemy *);
    bool action(int);
    std::string const &getName() const;
    int getAp() const;
    AWeapon *getWeapon() const;

protected:
    std::string name;
    int ap;
    AWeapon *weapon;
};

std::ostream &operator<<(std::ostream &os, Character const &perso);

#endif