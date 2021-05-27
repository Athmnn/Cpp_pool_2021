/*
** EPITECH PROJECT, 2021
** Fruit
** File description:
** Fruit
*/

#ifndef __FRUIT__
#define __FRUIT__

#include <string>

class Fruit {
public:
    explicit Fruit();
    explicit Fruit(Fruit const &fruit);
    Fruit &operator=(Fruit const &);
    std::string const &getName() const;
    int getVitamins() const;
protected:
    std::string _name;
    int _vitamins;
};

#endif /* __FRUIT__ */
