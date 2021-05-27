/*
** EPITECH PROJECT, 2024
** B_CPP_300_STG_3_1_CPPD09_antony_fantapie
** File description:
** Created by antonyftp
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_ANTONY_FANTAPIE_MAGE_HPP
#define B_CPP_300_STG_3_1_CPPD09_ANTONY_FANTAPIE_MAGE_HPP

#include "Character.hpp"

class Mage : public virtual Character {
    public:
        Mage(const std::string &name = "Fluffy", int level = 40);
        ~Mage();
        int CloseAttack();
        int RangeAttack();

        virtual void RestorePower();
};

#endif //B_CPP_300_STG_3_1_CPPD09_ANTONY_FANTAPIE_MAGE_HPP
