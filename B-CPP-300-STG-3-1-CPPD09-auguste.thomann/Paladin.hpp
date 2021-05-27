/*
** EPITECH PROJECT, 2024
** B_CPP_300_STG_3_1_CPPD09_antony_fantapie
** File description:
** Created by antonyftp
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_ANTONY_FANTAPIE_PALADIN_HPP
#define B_CPP_300_STG_3_1_CPPD09_ANTONY_FANTAPIE_PALADIN_HPP

#include "Priest.hpp"
#include "Warrior.hpp"

class Paladin : public virtual Warrior, public virtual Priest {
    public:
        explicit Paladin(const std::string &name = "Phiste", int lvl = 42);

        int CloseAttack();
        int RangeAttack();
        void RestorePower();
        void Heal();
        int Intercept();
};


#endif //B_CPP_300_STG_3_1_CPPD09_ANTONY_FANTAPIE_PALADIN_HPP
