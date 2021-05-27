/*
** koalanurse.cpp for B-CPP-300-STG-3-1-CPPD06-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD06-auguste.thomann/hospital
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 11 15:01:46 2021 
** Last update Wed Jan 12 09:22:07 2021 
*/

#include "KoalaNurse.hpp"
#include <iostream>

int KoalaNurse::getID()
{
    return (this->id);
}

KoalaNurse::KoalaNurse(int id)
{
    this->id = id;
    this->work = false;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << this->id << ": Finally some rest!" << std::endl;
    this->id = 0;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala *SickKoala)
{
    SickKoala->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string report)
{
    std::ifstream file(report);
    std::string drug;

    if (file.is_open()) {
        std::string patient(report.substr(0, report.find_last_of('.')));
        if (report.find_last_of(".report")) {
            std::getline(file, drug);
            std::cout << "Nurse " << this->id << ": Kreog! Mr." << patient << " needs a " << drug << "!" << std::endl;
            return (drug);
        }
    }
    return std::string("");
}

void KoalaNurse::timeCheck()
{
    this->work = !this->work;
    if (this->work)
        std::cout << "Nurse " << this->id << ": Time to get to work!" << std::endl;
    else if (!this->work)
        std::cout << "Nurse " << this->id << ": Time to go home to my eucalyptus forest!" << std::endl;
}
