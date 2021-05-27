/*
** Buzz.hpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:44:47 2021 
** Last update Wed Jan 19 18:44:49 2021 
*/

#ifndef __BUZZ__
#define __BUZZ__

#include "Toy.hpp"

class Buzz : public Toy {
public:
    explicit Buzz(std::string const &name, std::string const &fileNale = "buzz.txt") noexcept;

    void speak(std::string const &statement) noexcept;
};

#endif /* __BUZZ__ */
