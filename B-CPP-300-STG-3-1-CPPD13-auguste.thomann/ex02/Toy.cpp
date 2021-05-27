/*
** Toy.cpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 19:25:55 2021 
** Last update Tue Jan 18 19:25:57 2021 
*/

#include "Toy.hpp"

std::string Toy::getAscii() const
{
    return (this->Picture_ptr->getData());
}

bool Toy::setAscii(std::string file)
{
    return (Picture_ptr->getPictureFromFile(file));
}

void Toy::setName(std::string name)
{
    this->name = name;
}

int Toy::getType() const
{
    return (this->ToyType);
};

std::string Toy::getName() const
{
    return (this->name);
};

Toy::Toy()
{
    this->name = "toy";
    this->ToyType = BASIC_TOY;
    this->Picture_ptr = new Picture();
}

Toy::Toy(const Toy &toy)
{
    Picture *tmp = new Picture();
    tmp->setData(toy.Picture_ptr->getData());
    this->ToyType = toy.ToyType;
    this->name = toy.name;
    this->Picture_ptr = tmp;
}

Toy::Toy(Toy::Type Type, std::string name, std::string file)
{
    this->ToyType = Type;
    this->name = name;
    this->Picture_ptr = new Picture(file);
}

Toy::~Toy()
{
    delete Picture_ptr;
}

Toy &Toy::operator=(const Toy &toy)
{
    Picture *tmp = new Picture();
    tmp->setData(toy.Picture_ptr->getData());
    this->ToyType = toy.ToyType;
    this->name = toy.name;
    this->Picture_ptr = tmp;
    return (*this);
}
