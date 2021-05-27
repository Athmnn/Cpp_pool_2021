/*
** EPITECH PROJECT, 2029
** Sarah-Keppler
** Error.hpp
*/

#ifndef ERROR_HPP
#define ERROR_HPP

#include <iostream>
#include <stdexcept>

class Error : public std::exception
{
public:
    Error(std::string const &message = "Unknown");
    const char *what(void) const noexcept;

private:
    std::string _message;
};

#endif /* ERROR_HPP */
