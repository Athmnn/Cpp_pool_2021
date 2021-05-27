/*
** KoalaDoctor.cpp for hospital in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD06-auguste.thomann/hospital
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 11 19:11:55 2021 
** Last update Tue Jan 11 19:58:17 2021 
*/

#include "KoalaDoctor.hpp"

std::string KoalaDoctor::getName()
{
    return (this->name);
}

KoalaDoctor::KoalaDoctor(std::string name)
{
    this->name = name;
    this->work = false;
    std::cout << "Dr." << this->name << ": I'm Dr." << this->name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::ofstream file(patient->getName() + ".report");
    std::string drugs[5] = {"Mars", "Kinder", "Crunch", "Maroilles",
                            "Eucalyptus leaf"};
    int drugs_case = (int)(random() % 5);

    std::cout << "Dr." << this->name << ": So what's goerking you Mr." << patient->getName() << "?" << std::endl;
    patient->poke();
    file << drugs[drugs_case] << std::endl;
    
}

void KoalaDoctor::timeCheck()
{
    this->work = !this->work;
    if (this->work)
        std::cout << "Dr." << this->name << ": Time to get to work!" << std::endl;
    else if (!this->work)
        std::cout << "Dr." << this->name << ": Time to go home to my eucalyptus forest!" << std::endl;
}
