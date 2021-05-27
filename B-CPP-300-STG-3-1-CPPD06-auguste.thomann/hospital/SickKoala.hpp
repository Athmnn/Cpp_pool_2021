/*
** SickKoala.hpp for B-CPP-300-STG-3-1-CPPD06-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD06-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 11 13:54:25 2021 
** Last update Mon Jan 11 13:54:25 2021 
*/

#ifndef SICKKOALA_H__
#define SICKKOALA_H__

#include <string>

class SickKoala
{
private:
    std::string name;

public:
    SickKoala(std ::string);
    ~SickKoala();
    void poke();
    bool takeDrug(std ::string);
    void overDrive(std ::string);
    std::string getName();
};

#endif