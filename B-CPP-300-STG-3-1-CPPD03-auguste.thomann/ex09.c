/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex09
*/

#include "string.h"
#include <string.h>

int empty(const string_t *this)
{
    if (strlen(this->str) == 0)
        return (1);
    return (0);
}