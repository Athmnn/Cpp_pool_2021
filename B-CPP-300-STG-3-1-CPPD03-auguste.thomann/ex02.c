/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex02
*/

#include "string.h"
#include <string.h>
#include <unistd.h>

void append_s(string_t *this, const string_t *ap)
{
    append_c(this, ap->str);
}

void append_c(string_t *this, const char *ap)
{
    int size = strlen(this->str) + strlen(ap) + 1;
    this->str = realloc(this->str, size);
    if (ap != NULL && this->str != NULL)
        strcat(this->str, ap);
}