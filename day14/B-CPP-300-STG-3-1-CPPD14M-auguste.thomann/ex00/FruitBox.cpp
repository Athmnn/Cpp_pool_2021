/*
** EPITECH PROJECT, 2021
** FruitBox
** File description:
** FruitBox
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size) : _size(size), _nbFruits(0), _head(NULL)
{
}

int FruitBox::nbFruits() const
{
    return (this->_nbFruits);
}

bool FruitBox::putFruit(Fruit *fruit)
{
    if (!fruit || this->_size == this->_nbFruits)
        return (false);

    FruitNode *node = new FruitNode();
    FruitNode *tmp;
    FruitNode *prev = 0;

    tmp = this->_head;
    while (tmp)
    {
        if (tmp->_fruit == fruit)
            return (false);
        prev = tmp;
        tmp = tmp->next;
    }
    tmp = node;
    if (prev)
        prev->next = tmp;
    tmp->_fruit = fruit;
    tmp->next = NULL;
    if (!this->_head)
        this->_head = tmp;
    this->_nbFruits++;
    return (true);
}

Fruit *FruitBox::pickFruit()
{
    if (this->_nbFruits)
    {
        FruitNode *del = this->_head;
        Fruit *fruit = del->_fruit;
        this->_head = this->_head->next;
        delete del;
        this->_nbFruits--;
        return fruit;
    }
    return (NULL);
}

FruitNode *FruitBox::head()
{
    return (this->_head);
}
