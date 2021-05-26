/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex12
*/

#include "string.h"

int to_int(const string_t *this)
{
    return (atoi(this->str));
}