/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** Image.hpp
*/

#ifndef Image_HPP
#define Image_HPP

#include <string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Image
{
public:
    Image(std::string const &src);
//    Image(std::string const &src, const std::size_t x, const std::size_t y);
    ~Image() = default;

    unsigned int getWidth() const noexcept;
    unsigned int getHeight() const noexcept;
    
    void display() const noexcept;
private:
    sf::Image _image;
};

#endif /* Image_HPP */
