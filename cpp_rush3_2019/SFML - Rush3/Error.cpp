/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** handling errors is something was is.. well.. necessary.
*/

#include "Error.hpp"

Error::Error(std::string const &message) : _message(message)
{
}

const char *Error::what(void) const noexcept
{
    return _message.c_str();
}
