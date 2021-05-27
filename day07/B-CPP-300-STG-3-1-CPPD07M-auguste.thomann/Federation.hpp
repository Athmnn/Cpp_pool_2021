/*
** Federation.hpp for B-CPP-300-STG-3-1-CPPD07M-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/day07/B-CPP-300-STG-3-1-CPPD07M-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 13 09:11:10 2021 
** Last update Thu Jan 13 09:11:12 2021 
*/

#ifndef __FEDERATION__
#define __FEDERATION__

#include "WarpSystem.hpp"
#include "Destination.hpp"
#include <string>

namespace Borg {
    class Ship;
}

namespace Federation {
    namespace Starfleet {
        class Captain {
        private:
            std::string _name;
            int _age;

        public:
            std::string getName() const;
            int getAge() const;
            void setAge(int const age);

            explicit Captain(std::string const name);
        };

        class Ship {
        protected:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            Destination _location;
            Destination _home = EARTH;
            int _shield = 100;
            int _photonTorpedo = 0;
            Captain *_captain = NULL;

        public:
            WarpSystem::Core *_core;

            void setupCore(WarpSystem::Core *core);
            void checkCore() const;
            void promote(Captain *captain);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            Captain *getCaptain() const;
            int getShield();
            void setShield(int shield);
            int getTorpedo();
            void setTorpedo(int torpedo);
            void fire(Borg::Ship *target);
            void fire(int const torpedoes, Borg::Ship *target);

            explicit Ship(int const length, int const width, std::string const name, short const maxWarp, int torpedo = 0);
            explicit Ship();
        };

        class Ensign {
        private:
            std::string _name;

        public:
            Ensign(std::string const name);
        };
    }

    class Ship {
    protected:
        int _length;
        int _width;
        std::string _name;
        short _maxWarp;
        WarpSystem::Core *_core;
        Destination _location;
        Destination _home = VULCAN;

    public:
        void setupCore(WarpSystem::Core *core);
        void checkCore() const;
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
        WarpSystem::Core *getCore() const;

        explicit Ship(int const length, int const width, std::string const name);
    };
}

#endif /* __FEDERATION__ */
