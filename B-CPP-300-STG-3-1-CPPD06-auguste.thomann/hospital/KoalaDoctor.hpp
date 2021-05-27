/*
** KoalaDoctor.hpp for hospital in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD06-auguste.thomann/hospital
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 11 19:11:41 2021 
** Last update Tue Jan 11 19:49:08 2021 
*/

#ifndef KOALADOCTOR_HPP_
# define KOALADOCTOR_HPP_

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cstdlib>

#include "SickKoala.hpp"

class KoalaDoctor {
    public:
        KoalaDoctor(std::string name);
        ~KoalaDoctor();
        std::string getName();
        void diagnose(SickKoala *patient);
        void timeCheck();
    private:
        std::string name;
        bool work;
};

#endif
