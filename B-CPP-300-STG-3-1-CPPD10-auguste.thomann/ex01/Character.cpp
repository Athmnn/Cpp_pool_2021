/*
** Character.cpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 15:37:12 2021 
** Last update Mon Jan 17 20:01:19 2021 
*/

#include "Character.hpp"

Character::Character(std::string _name)
{
    this->name = _name;
    this->ap = 40;

}

Character::~Character()
{
}

void Character::recoverAP()
{
    this->ap += 10;
    if (this->ap > 40)
        ap = 40;
}

void Character::equip(AWeapon *weapon)
{
    this->weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{

    if (!this->weapon || !enemy)
        return;
    if (this->action(this->weapon->getAPCost())) {
        std::cout << name << " attacks " << enemy->getType() << "with a " << weapon->getName() << std::endl;
        this->weapon->attack();
        enemy->takeDamage(this->weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

bool Character::action(int value)
{
    if (this->ap >= value) {
        this->ap -= value;
        return(true);
    }
    return(false);
}

std::string const & Character::getName() const
{
    return(this->name);
}

int Character::getAp() const
{
    return(this->ap);
}

AWeapon *Character::getWeapon() const
{
    return(this->weapon);
}

std::ostream & operator<<(std::ostream & os, Character const & perso)
{

    os << perso.getName() <<  " has " << perso.getAp() << " AP and ";
    if (perso.getWeapon())
        os << "wields a " << perso.getWeapon()->getName();
    else
        os << "is unarmed";
    os << std::endl;
    return(os);
}


