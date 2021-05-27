/*
** EPITECH PROJECT, 2023
** cpp_d13_2019
** File description:
** Created by antonyftp,
*/

#ifndef CPP_D13_2019_TOY_HPP
#define CPP_D13_2019_TOY_HPP

#include <iostream>
#include "Picture.hpp"

class Toy {
    public:
        enum Type {
            BASIC_TOY,
            ALIEN
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
    private:
        std::string name;
        Picture *Picture_ptr;
};

#endif