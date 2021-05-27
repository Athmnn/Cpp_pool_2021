/*
** Woody.cpp for B-CPP-300-STG-3-1-CPPD13-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 22:53:56 2021 
** Last update Tue Jan 18 22:54:35 2021 
*/

#include "Woody.hpp"

Woody::Woody(std::string name, const std::string ascii)
{
    this->name = name;
    this->Picture_ptr = new Picture(ascii);
}