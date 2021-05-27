/*
** Picture.cpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:44:57 2021 
** Last update Wed Jan 19 18:52:35 2021 
*/

#include "Picture.hpp"
#include <fstream>
#include<sstream>

Picture::Picture(std::string const &fileName)
{
    getPictureFromFile(fileName);
}

Picture::Picture(Picture const &picture) : _data{picture.getPicture()}
{}

Picture::~Picture()
{}

Picture &Picture::operator=(Picture const &picture)
{
    _data = picture.getPicture();
    return *this;
}

bool Picture::getPictureFromFile(std::string const &fileName)
{
    if (fileName == "") {
        _data = "";
        return true;
    }
    std::ifstream file(fileName.c_str());
    if (file || file.is_open()) {
        std::ostringstream ss;
        ss << file.rdbuf();
        _data = ss.str();
    } else {
        _data = "ERROR";
        return false;
    }
    file.close();
    return true;
}

std::string Picture::getPicture() const
{
    return _data;
}
