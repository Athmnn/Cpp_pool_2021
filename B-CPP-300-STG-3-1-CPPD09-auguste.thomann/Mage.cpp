/*
** EPITECH PROJECT, 2024
** B_CPP_300_STG_3_1_CPPD09_antony_fantapie
** File description:
** Created by antonyftp
*/

#include "Mage.hpp"

void Mage::RestorePower()
{
    this->power += 50 + this->Intelligence;
    if (this->power > 100)
        this->power = 100;
    std::cout << this->name << " takes a mana potion" << std::endl;
}

int Mage::RangeAttack()
{
    if (this->power < 25) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    std::cout << this->name << " launches a fire ball" << std::endl;
    this->power -= 25;
    return (20 + Spirit);
}

int Mage::CloseAttack()
{
    if (this->power < 10) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    std::cout << this->name << " blinks" << std::endl;
    this->power -= 10;
    this->Range = Character::RANGE;
    return (0);
}

Mage::~Mage()
{
}

Mage::Mage(const std::string &name, int level): Character(name, level)
{
    this->health = 100;
    this->power = 100;
    this->Strength = 6;
    this->Stamina = 6;
    this->Intelligence = 12;
    this->Spirit = 11;
    this->Agility = 7;
    std::cout << this->name << " teleported" << std::endl;
}