/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** image of sf::Image (good idea, probably not)
*/

#include <iostream>
#include "Image.hpp"
#include "Error.hpp"

Image::Image(std::string const &src)
{
    if (!_image.loadFromFile(src))
	throw Error{"Impossible to load " + src};
}

unsigned int Image::getWidth() const noexcept
{
    return _image.GetWidth();
}

unsigned int Image::getHeight() const noexcept
{
    return _image.GetHeight();
}

void Image::display(const sf::RenderWindow &window) const noexcept
{
    window.draw(_image);
}
