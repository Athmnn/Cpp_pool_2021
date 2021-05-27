/*
** Toy.cpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:45:10 2021 
** Last update Wed Jan 19 18:54:27 2021 
*/

#include "Toy.hpp"
#include <iostream>

Toy::Toy() : _toyType{Toy::BASIC_TOY}, _name{"toy"}
{}

Toy::Toy(Toy::ToyType const toyType, std::string const &name, std::string const &filePath) : _toyType{toyType}, _name{name}, _picture{filePath}
{}

Toy::~Toy()
{}

Toy::Toy(Toy const &toy) : _toyType{toy.getType()}, _name{toy.getName()}, _picture{toy.getPicture()}
{}

void Toy::speak(std::string const &statement)
{
    std::cout << _name << " \"" << statement << "\"" << std::endl;
}

Toy &Toy::operator=(Toy const &toy)
{
    _picture = toy.getPicture();
    _name = toy.getName();
    _toyType = toy.getType();
    return *this;
}

std::string const &Toy::getName() const
{
    return _name;
}

void Toy::setName(std::string const name)
{
    _name = name;
}

Toy::ToyType Toy::getType() const
{
    return _toyType;
}

bool Toy::setAscii(std::string const &fileName)
{
    return _picture.getPictureFromFile(fileName);
}

std::string Toy::getAscii() const
{
    return _picture.getPicture();
}

Picture const &Toy::getPicture() const
{
    return _picture;
}
