/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex10
*/

#include "string.h"

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    return (find_c(this, str->str, pos));
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    int index = 0;

    if (this != NULL && this->str != NULL
    && pos > strlen(this->str) && strlen(str) > strlen(this->str))
        return (-1);
    if (strstr(this->str, str) == NULL)
        return (-1);
    for (int i = pos; i <= strlen(this->str) - 1; ++i, index = 0) {
        for (int temp = i; this->str[temp] == str[index]; ++index, ++temp) {
            if (str[index + 1] == '\0')
                return (i);
        }
    }
    return (-1);
}