/*
** Cesar.cpp for B-CPP-300-STG-3-1-CPPD17-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD17-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 22 10:04:26 2021 
** Last update Fri Jan 22 10:04:26 2021 
*/

#include <iostream>
#include "Cesar.hpp"

#include "Cesar.hpp"

Cesar::Cesar() : _shift(3) {}
Cesar::~Cesar() {}

void Cesar::encryptChar(char character)
{
    if (character >= 'a' && character <= 'z')
        character = 'a' + ((character - 'a' + _shift) % 26);
    else if (character >= 'A' && character <= 'Z')
        character = 'A' + ((character - 'A' + _shift) % 26);
    std::cout << character;
    ++_shift;
}

void Cesar::decryptChar(char character)
{
    if (character >= 'a' && character <= 'z')
    {
        character = (character - 'a' - _shift) % 26;
        if (character < 0)
            character += 26;
        character += 'a';
    }
    else if (character >= 'A' && character <= 'Z')
    {
        character = (character - 'A' - _shift) % 26;
        if (character < 0)
            character += 26;
        character += 'A';
    }
    std::cout << character;
    ++_shift;
}

void Cesar::reset()
{
    _shift = 3;
}