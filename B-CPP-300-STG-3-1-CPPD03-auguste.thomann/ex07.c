/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex07
*/

#include "string.h"
#include <string.h>

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    int size = 0;
    int index = 0;

    if (this->str == NULL)
        return (0);
    size = strlen(this->str);
    if (pos > size)
        return (0);
    for (int i = pos; i <= pos + n && this->str[i - 1] == NULL; i++) {
        index++;
        s[index] == this->str[i];
    }
    return (index);
}