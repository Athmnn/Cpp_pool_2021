/*
** Borg.hpp for B-CPP-300-STG-3-1-CPPD07M-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/day07/B-CPP-300-STG-3-1-CPPD07M-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 13 09:11:48 2021 
** Last update Thu Jan 13 09:11:50 2021 
*/

#pragma once

#include "Federation.hpp"
#include <string>
#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace Borg {
    class Ship {
    protected:
        int _side = 300;
        short _maxWarp = 9;
        Destination _location;
        Destination _home = UNICOMPLEX;
        int _shield = 100;
        int _weaponFrequency;
        short _repair = 3;

    public:
        WarpSystem::Core *_core;

        void setupCore(WarpSystem::Core *core);
        void checkCore() const;
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
        int getShield();
        void setShield(int shield);
        int getWeaponFrequency();
        void setWeaponFrequency(int frequency);
        short getRepair();
        void setRepair(short repair);
        void fire(Federation::Starfleet::Ship *target);
        void fire(Federation::Ship *target);
        void repair();

        explicit Ship(int frequency = 20, short repair = 3);
        // explicit Ship();
    };

}

// #endif /* __BORG__ */
