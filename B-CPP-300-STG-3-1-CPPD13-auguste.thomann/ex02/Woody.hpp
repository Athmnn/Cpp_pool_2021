/*
** Woody.hpp for B-CPP-300-STG-3-1-CPPD13-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 22:49:26 2021 
** Last update Tue Jan 18 22:54:53 2021 
*/

#include "Toy.hpp"

#ifndef WOODY_HPP_
# define WOODY_HPP_

class Woody : public Toy {
    public:
        Woody(std::string name , std::string const ascii = "woody.txt");
};

#endif /* !WOODY_HPP_ */
