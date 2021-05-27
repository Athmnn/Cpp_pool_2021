/*
** Priest.cpp for B-CPP-300-STG-3-1-CPPD09-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD09-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 14 21:36:37 2021 
** Last update Thu Jan 14 21:36:37 2021 
*/

#include "Priest.hpp"

void Priest::Heal()
{
    if (this->power < 10) {
        std::cout << this->name << " out of power" << std::endl;
        return;
    }
    if (this->health >= 70)
        this->health = 100;
    else
        this->health += 70;
    this->power -= 10;
    std::cout << this->name << " casts a little heal spell" << std::endl;
}

int Priest::CloseAttack()
{
    if (this->power < 10) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    std::cout << this->name << " uses a spirit explosion" << std::endl;
    this->power -= 10;
    this->Range = Character::RANGE;
    return (10 + this->Spirit);
}

Priest::~Priest()
{
}

Priest::Priest(const std::string &name, int level): Character(name, level)
{
    this->health = 100;
    this->power = 100;
    this->Strength = 4;
    this->Stamina = 4;
    this->Intelligence = 42;
    this->Spirit = 21;
    this->Agility = 2;
    std::cout << this->name << " enters in the order" << std::endl;
}