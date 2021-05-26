/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex03
*/

#include "string.h"
#include <string.h>

char at(const string_t *this, size_t pos)
{
    if (pos > strlen(this->str) - 1 || this->str == NULL)
        return (-1);
    return (this->str[pos]);
}