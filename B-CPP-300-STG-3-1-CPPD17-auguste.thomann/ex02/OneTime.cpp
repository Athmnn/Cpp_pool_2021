/*
** OneTime.cpp for B-CPP-300-STG-3-1-CPPD17-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD17-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 22 10:04:29 2021 
** Last update Sat Jan 22 15:15:49 2021 
*/

#include <iostream>

#include "OneTime.hpp"

OneTime::OneTime(std::string key)
{
    this->key = key;
    index = 0;
}

OneTime::~OneTime()
{
}

void OneTime::encryptChar(char plainchar)
{
    int plainbase = plainchar;
    int keyplain = key[index];
    
    if (isalpha(plainchar))
    {
        if(plainbase > 96 )
            plainbase = 97;
        else plainbase = 65;

        if (keyplain  > 96) 
            keyplain = 97; 
        else keyplain = 65;
        plainchar =  (plainchar - plainbase) % 26 + plainbase;
    }
    std::cout << plainchar;
    index = (index + 1) % key.size();
}

void OneTime::decryptChar(char cipherchar)
{
    int cipherbase = cipherchar;
    int keycipher = key[index];

    if (isalpha(cipherchar))
    {
        cipherbase > 96 ? 122 : 90;
        keycipher > 96 ? 97 : 65;
        cipherchar = (cipherchar - cipherbase) % 26 + cipherbase;
    }
    std::cout << cipherchar;
    index = (index + 1) % key.size();
}

void OneTime::reset()
{
    index = 0;
}