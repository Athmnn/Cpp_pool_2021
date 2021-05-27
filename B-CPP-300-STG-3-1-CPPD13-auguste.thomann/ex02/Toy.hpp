/*
** Toy.hpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 19:26:06 2021 
** Last update Tue Jan 18 22:57:56 2021 
*/

#ifndef CPP_D13_2019_TOY_HPP
#define CPP_D13_2019_TOY_HPP

#include <iostream>
#include "Picture.hpp"

class Toy {
    public:
        enum Type {
            BASIC_TOY,
            ALIEN,
            BUZZ,
            WOODY
            
        } ToyType;

        Toy();
        Toy(Type Type, std::string name, std::string file);
        Toy(const Toy &toy);

        ~Toy();

        int getType() const;
        std::string getName() const;
        std::string getAscii() const;

        void setName(std::string name);
        bool setAscii(std::string file);

        Toy &operator=(const Toy &toy);
    protected:
        std::string name;
        Picture *Picture_ptr;
};

#endif