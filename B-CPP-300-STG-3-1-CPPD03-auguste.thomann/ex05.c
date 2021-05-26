/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex05
*/

#include "string.h"
#include <string.h>

int size(const string_t *this)
{
    if (this->str == NULL)
        return (-1);
    return ((int)strlen(this->str));
}