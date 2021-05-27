/*
** OneTime.hpp for B-CPP-300-STG-3-1-CPPD17-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD17-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 22 10:04:32 2021 
** Last update Fri Jan 22 10:04:32 2021 
*/
#ifndef __ONETIME_H__
#define __ONETIME_H__

#include <string>
#include <iostream>

#include "IEncryptionMethod.hpp"

class OneTime : public IEncryptionMethod
{
protected:
    std::string key;
    int index;

public:
    OneTime(std::string key);
    virtual ~OneTime();

    virtual void encryptChar(char plainchar);
    virtual void decryptChar(char cipherchar);
    virtual void reset();
};

#endif