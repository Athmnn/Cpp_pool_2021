/*
** KoalaNurse.hpp for B-CPP-300-STG-3-1-CPPD06-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD06-auguste.thomann/hospital
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 11 15:14:44 2021 
** Last update Tue Jan 11 15:53:30 2021 
*/

#ifndef _KOALANURSE_
#define _KOALANURSE_

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>

#include "SickKoala.hpp"

class KoalaNurse
{
    private:
        int id;
        bool work;

    public:
        KoalaNurse(int id);
        ~KoalaNurse();
        void giveDrug(std::string drug, SickKoala *SickKoala);
        std::string readReport(std::string report);
        void timeCheck();
        int getID();
};

#endif
