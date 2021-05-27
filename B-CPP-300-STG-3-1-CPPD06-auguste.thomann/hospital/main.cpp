/*
** main.cpp for B-CPP-300-STG-3-1-CPPD06-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD06-auguste.thomann/hospital
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 11 14:29:19 2021 
** Last update Tue Jan 11 19:43:43 2021 
*/

#include <iostream>
#include <ctime>
#include "SickKoala.hpp"
#include "KoalaNurse.hpp"
#include "KoalaDoctor.hpp"

int main() {
    srand(time(NULL));
    KoalaDoctor Martin("Martin");
    KoalaNurse Charlaine(2710);
    SickKoala Antony("Antony");

    std::cout << "--------- SickKoala Test ---------" << std::endl;
    std::cout << std::endl;

    std::cout << Antony.getName() << std::endl;
    Antony.poke();
    Antony.takeDrug("Mars");
    Antony.takeDrug("Kinder");
    Antony.takeDrug("Coke");
    Antony.overDrive("Kreog! How's it going? Kreog! Kreog! Kreog!");

    std::cout << std::endl;
    std::cout << "--------- KoalaNurse Test ---------" << std::endl;
    std::cout << std::endl;
    
    std::cout << Charlaine.getID() << std::endl;
    Charlaine.giveDrug("Mars", &Antony);
    std::cout << Charlaine.readReport("Antony.report") << std::endl;
    Charlaine.timeCheck();
    Charlaine.timeCheck();

    std::cout << std::endl;
    std::cout << "--------- KoalaDoctor Test ---------" << std::endl;
    std::cout << std::endl;

    std::cout << Martin.getName() << std::endl;
    Martin.diagnose(&Antony);
    Martin.timeCheck();
    Martin.timeCheck();

    std::cout << std::endl;
    std::cout << "--------- Destruction ---------" << std::endl;
    std::cout << std::endl;
}