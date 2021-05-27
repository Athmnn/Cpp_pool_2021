/*
** AEnemy.hpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 14:12:33 2021 
** Last update Mon Jan 17 19:43:45 2021 
*/

#ifndef AENEMY_HPP_
#define AENEMY_HPP_

#include <string>

class AEnemy
{
public:
    AEnemy(int, std::string const &type);
    ~AEnemy();

    std::string const &getType() const;
    int getHP() const;
    void takeDamage(int);

protected:
    int hp;
    std::string type;
};

#endif /* !AENEMY_HPP_ */
