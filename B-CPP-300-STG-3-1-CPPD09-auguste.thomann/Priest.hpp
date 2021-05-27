/*
** Priest.hpp for B-CPP-300-STG-3-1-CPPD09-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD09-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 14 21:36:45 2021 
** Last update Thu Jan 14 21:36:45 2021 
*/

#ifndef B_CPP_300_STG_3_1_CPPD09_AUGUSTE_THOMANN_PRIEST_HPP
#define B_CPP_300_STG_3_1_CPPD09_AUGUSTE_THOMANN_PRIEST_HPP

#include "Mage.hpp"

class Priest : public virtual Mage {
    public:
        Priest(const std::string &name = "Iopi", int level = 84);
        ~Priest();
        int CloseAttack();

        virtual void Heal();
};

#endif //B_CPP_300_STG_3_1_CPPD09_ANTONY_FANTAPIE_PRIEST_HPP
