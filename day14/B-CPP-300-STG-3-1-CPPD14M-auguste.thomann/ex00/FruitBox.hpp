#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_

#include "FruitNode.hpp"

class FruitBox
{
public:
    FruitBox(int size);
    ~FruitBox() = default;
    int nbFruits() const;
    bool putFruit(Fruit *f);
    Fruit *pickFruit();
    FruitNode *head();

protected:
    int _size;
    int _nbFruits;
    FruitNode *_head;

private:
};

#endif /* FRUITBOX_HPP_ */