/*
** Buzz.cpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:44:40 2021 
** Last update Wed Jan 19 18:44:42 2021 
*/

#include "Buzz.hpp"
#include <iostream>

Buzz::Buzz(std::string const &name, std::string const &fileName) noexcept : Toy(Toy::BUZZ, name, fileName)
{}

void Buzz::speak(std::string const &statement) noexcept
{
    std::cout << "BUZZ: " << _name << " \"" << statement << "\"" << std::endl;    
}
