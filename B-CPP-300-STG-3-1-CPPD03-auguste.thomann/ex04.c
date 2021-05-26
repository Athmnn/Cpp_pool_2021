/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex04
*/

#include "string.h"

void clear(string_t *this)
{
    string_destroy(this);
    this->str = NULL;
}