/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex01
*/

#include "string.h"
#include <stdlib.h>
#include <string.h>

void assign_s(string_t *this, const string_t *str)
{
    assign_c(this, str->str);
}

void assign_c(string_t *this, const char *s)
{
    string_destroy(this);
    this->str = strdup(s);
}