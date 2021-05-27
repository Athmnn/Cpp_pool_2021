/*
** Woody.cpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:45:25 2021 
** Last update Wed Jan 19 18:45:27 2021 
*/

#include "Woody.hpp"
#include <iostream>

Woody::Woody(std::string const &name, std::string const &fileName) noexcept : Toy(Toy::WOODY, name, fileName)
{}

void Woody::speak(std::string const &statement) noexcept
{
    std::cout << "WOODY: " << _name << " \"" << statement << "\"" << std::endl;    
}
