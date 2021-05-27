/*
** Character.cpp for B-CPP-300-STG-3-1-CPPD09-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD09-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 14 20:58:06 2021 
** Last update Thu Jan 14 20:58:06 2021 
*/

#include "Character.hpp"

void Character::TakeDamage(int damage)
{
    if (this->health > damage) {
        this->health -= damage;
        std::cout << this->name << " takes " << damage << " damage" << std::endl;
    }
    else {
        this->health = 0;
        std::cout << this->name << " out of combat" << std::endl;
    }
}

void Character::RestorePower()
{
    this->power = 100;
    std::cout << this->name << " eats" << std::endl;
}

void Character::Heal()
{
    if (this->health >= 50)
        this->health = 100;
    else
        this->health += 50;
    std::cout << this->name << " takes a potion" << std::endl;
}

int Character::RangeAttack()
{
    if (this->power < 10) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    std::cout << this->name << " tosses a stone" << std::endl;
    this->power -= 10;
    return (5 + this->Strength);
}

int Character::CloseAttack()
{
    if (this->power < 10) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    std::cout << this->name << " strikes with a wooden stick" << std::endl;
    this->power -= 10;
    return (10 + this->Strength);
}

const std::string &Character::getName() const
{
    return (this->name);
}

int Character::getLvl() const
{
    return (this->level);
}

int Character::getPv() const
{
    return (this->health);
}

int Character::getPower() const
{
    return (this->power);
}

Character::~Character()
{
}

Character::Character(const std::string &name, int level): name(name), level(level)
{
    this->health = 100;
    this->power = 100;
    this->Strength = 5;
    this->Stamina = 5;
    this->Intelligence = 5;
    this->Spirit = 5;
    this->Agility = 5;
    this->Range = CLOSE;
    std::cout << this->name << " Created" << std::endl;
}