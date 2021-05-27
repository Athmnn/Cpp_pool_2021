/*
** Toy.hpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 10:10:03 2021 
** Last update Tue Jan 18 10:11:19 2021 
*/

#ifndef TOY_H
#define TOY_H

#include <iostream>
#include <fstream>
#include <string>
#include "Picture.hpp"
#include "Toy.hpp"

class Toy
{
public:
    enum ToyType
    {
        BASIC_TOY,
        ALIEN
    };

private:
    ToyType type;
    std::string name;
    Picture picture;

public:

    ToyType getType() const;
    Toy(ToyType type, std::string const &name, std::string const &file);
    std::string const &getName() const;
    void setName(std::string const &name);
    std::string const &getAscii() const;
    bool setAscii(std::string const &filename);
    Toy();
    Toy(Toy const &toy);
    Toy &operator=(Toy const &toy);
    ~Toy();
    



};

#endif
