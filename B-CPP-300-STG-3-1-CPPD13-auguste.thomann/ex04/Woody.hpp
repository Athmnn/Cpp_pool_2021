/*
** Woody.hpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:45:32 2021 
** Last update Wed Jan 19 18:45:34 2021 
*/

#ifndef __WOODY__
#define __WOODY__

#include "Toy.hpp"

class Woody : public Toy {
public:
    explicit Woody(std::string const &name, std::string const &fileNale = "woody.txt") noexcept;

    void speak(std::string const &statement) noexcept;
};

#endif /* __WOODY__ */
