/*
** Buzz.cpp for ex02 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex02
**
/*
** Buzz.cpp for B-CPP-300-STG-3-1-CPPD13-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 22:42:36 2021 
** Last update Wed Jan 19 18:36:02 2021 
*/

#include "Buzz.hpp"

Buzz::Buzz(std::string name, const std::string ascii)
{
    this->name = name;
    this->Picture_ptr = new Picture(ascii);
}