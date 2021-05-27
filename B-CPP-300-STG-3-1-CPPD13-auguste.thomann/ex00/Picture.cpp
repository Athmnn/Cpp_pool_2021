/*
** Picture.cpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 09:08:22 2021 
** Last update Tue Jan 18 10:10:47 2021 
*/

#include "Picture.hpp"

Picture::Picture()
{
    this->data = "";
}

Picture::Picture(Picture const &picture) : data(picture.data)
{
}

Picture &Picture::operator=(Picture const &picture)
{
    if (&picture != this)
        this->data = picture.data;
    return *this;
}

Picture::Picture(const std::string &filename)
{
    std::ifstream stream(filename.c_str());
    std::string intermediate;
    if (stream && stream.is_open())
    {
        this->data = "";
        while (getline(stream, intermediate, '\0'))
            this->data += intermediate;
        stream.close();
    }
    else
        this->data = "ERROR";
}

Picture::~Picture()
{
}

bool Picture::getPictureFromFile(const std::string &filename)
{
    std::ifstream stream(filename.c_str());
    std::string intermediate;
    if (stream)
    {
        this->data = "";
        while (getline(stream, intermediate, '\0'))
            this->data += intermediate;
        stream.close();
    }
    else
        return false;
    return true;
}
