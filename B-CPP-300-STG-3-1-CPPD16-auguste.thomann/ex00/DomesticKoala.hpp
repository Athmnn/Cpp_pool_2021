/*
** EPITECH PROJECT, 2024
** B-CPP-300-STG-3-1-CPPD16-antony.fantapie
** File description:
** Created by antonyftp
*/

#ifndef EX_00_HPP
#define EX_00_HPP

#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "KoalaAction.hpp"

class DomesticKoala {
    public:
        DomesticKoala(KoalaAction &);
        DomesticKoala(const DomesticKoala &);
        ~DomesticKoala();

        using methodPointer_t = void (KoalaAction::*)(const std::string &);
        const std::vector<methodPointer_t> *getActions()const;

        void learnAction(unsigned char command, methodPointer_t action);
        void unlearnAction( unsigned char command);
        void doAction(unsigned char command, const std::string &param);
        void setKoalaAction(KoalaAction &);

        DomesticKoala &operator=(const DomesticKoala &);
    private:
        KoalaAction _action;
        std::vector<methodPointer_t> _knowAction;
};

#endif //EX_00_HP
