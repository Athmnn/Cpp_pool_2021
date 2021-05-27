/*
** EPITECH PROJECT, 2024
** B_CPP_300_STG_3_1_CPPD09_antony_fantapie
** File description:
** Created by antonyftp
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int lvl) : Character(name, lvl), Warrior(name, lvl), Priest(name, lvl)
{
    this->health = 100;
    this->power = 100;
    this->Strength = 9;
    this->Stamina = 10;
    this->Intelligence = 10;
    this->Spirit = 10;
    this->Agility = 2;
    std::cout << "the light falls on " << this->name << std::endl;
}

int Paladin::CloseAttack()
{
    if (this->power < 30) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    std::cout << this->name << " strikes with his " << this->weaponName << std::endl;
    this->power -= 30;
    return (20 + this->Strength);
}

int Paladin::RangeAttack()
{
    if (this->power < 25) {
        std::cout << this->name << " out of power" << std::endl;
        return (0);
    }
    std::cout << this->name << " launches a fire ball" << std::endl;
    this->power -= 25;
    return (20 + Spirit);
}

void Paladin::RestorePower()
{
    this->power = 100;
    std::cout << this->name << " eats" << std::endl;
}

void Paladin::Heal()
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

int Paladin::Intercept()
{
    return (Warrior::RangeAttack());
}
