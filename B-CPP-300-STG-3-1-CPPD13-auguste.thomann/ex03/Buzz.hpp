/*
** Buzz.hpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:44:47 2021 
** Last update Wed Jan 19 18:53:31 2021 
*/

#ifndef __BUZZ__
#define __BUZZ__

#include "Toy.hpp"

class Buzz : public Toy {
public:
    Buzz(std::string const &name, std::string const &fileNale = "buzz.txt");

    void speak(std::string const &statement);
};

#endif /* __BUZZ__ */
