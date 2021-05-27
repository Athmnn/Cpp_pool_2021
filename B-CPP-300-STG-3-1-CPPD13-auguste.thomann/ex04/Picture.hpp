/*
** Picture.hpp for ex03 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 18:45:04 2021 
** Last update Wed Jan 19 18:45:06 2021 
*/

#ifndef __PICTURE__
#define __PICTURE__

#include <string>

class Picture {
public:
    explicit Picture(std::string const &fileName = "") noexcept;
    explicit Picture(Picture const &picture) noexcept;
    ~Picture() noexcept;

    Picture &operator=(Picture const &picture);
    bool getPictureFromFile(std::string const &file) noexcept;
    std::string getPicture() const noexcept;

private:
    std::string _data;
};

#endif /* __PICTURE__ */
