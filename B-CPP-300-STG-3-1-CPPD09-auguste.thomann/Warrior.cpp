/*
** Warrior.cpp for B-CPP-300-STG-3-1-CPPD09-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD09-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 14 21:15:27 2021 
** Last update Thu Jan 14 21:15:27 2021 
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level, std::string weaponName): Character(name, level)
{
    this->health = 100;
    this->power = 100;
    this->Strength = 12;
    this->Stamina = 12;
    this->Intelligence = 6;
    this->Spirit = 5;
    this->Agility = 7;
    this->weaponName = weaponName;
    std::cout << "I'm " << this->name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

int Warrior::RangeAttack()
{
    if (this->power < 10) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    std::cout << this->name << " intercepts" << std::endl;
    this->power -= 10;
    this->Range = CLOSE;
    return (0);
}

int Warrior::CloseAttack()
{
    if (this->power < 30) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    std::cout << this->name << " strikes with his " << this->weaponName << std::endl;
    this->power -= 30;
    return (20 + this->Strength);
}

Warrior::~Warrior()
{
}
