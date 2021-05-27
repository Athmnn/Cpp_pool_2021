/*
** AEnemy.cpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 14:12:36 2021 
** Last update Sat Jan 15 15:36:01 2021 
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int _hp, std::string const &_type)
{
    this->hp = _hp;
    this->type = _type;
}

AEnemy::~AEnemy()
{
}

std::string const &AEnemy::getType() const
{
    return (this->type);
}

int AEnemy::getHP() const
{
    return (this->hp);
}

void AEnemy::takeDamage(int dmg)
{
    if (dmg > 0)
        hp -= dmg;
}
