/*
** Character.hpp for B-CPP-300-STG-3-1-CPPD09-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD09-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 14 20:58:16 2021 
** Last update Thu Jan 14 20:58:16 2021 
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_AUGUSTE_THOMANN_CHARACTER_HPP
#define B_CPP_300_STG_3_1_CPPD09_AUGUSTE_THOMANN_CHARACTER_HPP

#include <iostream>

class Character {
    public:
        enum AttackRange {
            CLOSE,
            RANGE
        };

        AttackRange Range;

        Character(const std::string &name = "Kreog", int level = 1);
        ~Character();

        const std::string &getName() const;
        int getLvl() const;
        int getPv() const;
        int getPower() const;

        virtual int CloseAttack();
        void Heal();

        virtual int RangeAttack();
        void RestorePower();
        void TakeDamage(int damage);

    protected:
        std::string name;
        int level;
        int health;
        int power;

        int Strength;
        int Stamina;
        int Intelligence;
        int Spirit;
        int Agility;
};

#endif //B_CPP_300_STG_3_1_CPPD09_ANTONY_FANTAPIE_CHARACTER_HPP

