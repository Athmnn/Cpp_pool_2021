/*
** Picture.hpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 09:08:16 2021 
** Last update Tue Jan 18 10:04:32 2021 
*/

#ifndef PICTURE_H
#define PICTURE_H

#include <iostream>
#include <fstream>
#include <string>

class Picture
{
public:
    std::string data;
    bool getPictureFromFile(const std::string &filename);
    Picture(const std::string &filename);
    Picture(Picture const &picture);
    Picture &operator=(Picture const &picture);
    Picture();
    ~Picture();
};

#endif