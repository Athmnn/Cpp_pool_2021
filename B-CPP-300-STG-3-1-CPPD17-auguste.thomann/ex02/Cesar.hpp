/*
** Cesar.hpp for B-CPP-300-STG-3-1-CPPD17-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD17-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 22 10:04:21 2021 
** Last update Fri Jan 22 10:04:21 2021 
*/

#ifndef CESAR_H_
#define CESAR_H_

#include <iostream>
#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod
{
public:
    Cesar();
    virtual ~Cesar();

    void encryptChar(char);
    void decryptChar(char);
    void reset();

private:
    int _shift;
};

#endif