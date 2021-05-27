/*
** Picture.cpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 19:25:04 2021 
** Last update Tue Jan 18 19:25:07 2021 
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
