/*
** EPITECH PROJECT, 2021
** FruitNode
** File description:
** FruitNode
*/

#ifndef FRUITNODE_HPP_
#define FRUITNODE_HPP_

#include "Fruit.hpp"

typedef struct FruitNode
{
    Fruit *_fruit;
    FruitNode *next;
} FruitNode;

#endif /* FRUITNODE_HPP_ */