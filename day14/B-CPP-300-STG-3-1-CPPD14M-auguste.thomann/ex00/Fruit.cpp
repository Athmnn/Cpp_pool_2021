/*
** EPITECH PROJECT, 2021
** Fruit
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::Fruit()
{

}

Fruit::Fruit(Fruit const &fruit) : _name{fruit.getName()},
    _vitamins{fruit.getVitamins()}
{}

Fruit &Fruit::operator=(Fruit const &fruit)
{
    if (this != &fruit) {
        _name = fruit.getName();
        _vitamins = fruit.getVitamins();
    }
    return *this;
}

std::string const &Fruit::getName() const
{
    return _name;
}

int Fruit::getVitamins() const
{
    return _vitamins;
}
