/*
** Buzz.hpp for B-CPP-300-STG-3-1-CPPD13-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 22:42:32 2021 
** Last update Wed Jan 19 18:36:30 2021 
*/

#ifndef BUZZ_HPP_
# define BUZZ_HPP_
#include "Toy.hpp"

class Buzz : public Toy 
{
    public:
        Buzz(std::string name , std::string const ascii = "buzz.txt");
};

#endif /* !BUZZ_HPP_ */

