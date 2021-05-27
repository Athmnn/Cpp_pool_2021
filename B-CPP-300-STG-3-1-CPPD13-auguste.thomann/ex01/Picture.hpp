/*
** EPITECH PROJECT, 2023
** cpp_d13_2019
** File description:
** Created by antonyftp,
*/

#ifndef CPP_D13_2019_PICTURE_HPP
#define CPP_D13_2019_PICTURE_HPP

#include <iostream>

class Picture {
    public:
        Picture();
        Picture(const std::string &file);
        Picture(const Picture &picture);
        ~Picture();

        std::string getData() const;
        void setData(std::string data);

        bool getPictureFromFile(const std::string &file);
        Picture &operator=(const Picture &picture);
    private:
        std::string data;
};

#endif
