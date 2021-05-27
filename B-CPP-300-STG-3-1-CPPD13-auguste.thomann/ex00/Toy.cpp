/*
** Toy.cpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 09:08:29 2021 
** Last update Tue Jan 18 10:10:28 2021 
*/

#include "Toy.hpp"

Toy::Toy() : type(Toy::BASIC_TOY), name("toy"), picture(Picture())
{
}

Toy::Toy(Toy const &toy) : type(toy.getType()), name(toy.getName()), picture(toy.getAscii())
{
}

Toy::Toy(ToyType type, std::string const &name, std::string const &filename) : type(type), name(name), picture(Picture(filename))
{
}

Toy::~Toy() {}

std::string const &Toy::getName() const
{
    return this->name;
}

void Toy::setName(std::string const &name)
{
    this->name = name;
}

Toy::ToyType Toy::getType() const
{
    return this->type;
}

std::string const &Toy::getAscii() const
{
    return this->picture.data;
}


bool Toy::setAscii(std::string const &file)
{
    return this->picture.getPictureFromFile(file);
}

Toy &Toy::operator=(Toy const &toy)
{
    this->name = toy.getName();
    this->type = toy.getType();
    this->picture = toy.getAscii();
    return *this;
}