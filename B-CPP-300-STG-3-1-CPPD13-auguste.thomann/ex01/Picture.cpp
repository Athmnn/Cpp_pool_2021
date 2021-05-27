/*
** EPITECH PROJECT, 2023
** cpp_d13_2019
** File description:
** Created by antonyftp,
*/

#include "Picture.hpp"
#include <fstream>
#include <string>

bool Picture::getPictureFromFile(const std::string &file)
{
    char c;
    std::ifstream picture;
    picture.open(file, std::ifstream::in);
    if (!picture.is_open()) {
        this->data = "ERROR";
        return (false);
    } else {
        this->data = "";
        c = picture.get();
        while (picture.good()) {
            this->data += c;
            c = picture.get();
        }
        picture.close();
    }
    return (true);
}

Picture::Picture()
{
    this->data = "";
}

Picture::Picture(const Picture &picture)
{
    this->data = picture.data;
}

Picture::Picture(const std::string &file)
{
    this->getPictureFromFile(file);
}

Picture::~Picture()
{
}

std::string Picture::getData() const
{
    return (this->data);
}

void Picture::setData(std::string data)
{
    this->data = data;
}

Picture &Picture::operator=(const Picture &picture)
{
    this->data = picture.data;
    return(*this);
}
