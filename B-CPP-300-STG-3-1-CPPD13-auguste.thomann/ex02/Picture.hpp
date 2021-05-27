/*
** Picture.hpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 19:25:17 2021 
** Last update Tue Jan 18 21:16:28 2021 
*/

#ifndef PICTURE_HPP
#define PICTURE_HPP

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
