/*
** Warrior.hpp for B-CPP-300-STG-3-1-CPPD09-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD09-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 14 21:10:01 2021 
** Last update Thu Jan 14 21:10:01 2021 
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_AUGUSTE_THOMANN_WARRIOR_HPP
#define B_CPP_300_STG_3_1_CPPD09_AUGUSTE_THOMANN_WARRIOR_HPP

#include "Character.hpp"

class Warrior : public virtual Character
{
public:
    Warrior(const std::string &name = "Thor", int level = 42, std::string weaponName = "hammer");
    ~Warrior();
    int CloseAttack();
    int RangeAttack();

protected:
    std::string weaponName;
};

#endif //B_CPP_300_STG_3_1_CPPD09_AUGUSTE_THOMANN_HPP
