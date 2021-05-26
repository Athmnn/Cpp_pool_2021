/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-auguste.thomann
** File description:
** main
*/
#include <stdio.h>
#include "menger.h"

int my_getnbr(char const *str)
{
    long nbr = 0;
    int length = 0;
    int sign = 1;

    if (!str)
        return (0);
    while (*str == ' ' && *str != '\0')
        str++;
    while (*str != '\0' || length >= 11) {
        if (*str >= '0' && *str <= '9') {
            nbr = nbr * 10 + (*str - '0');
            length++;
        }
        else if (length == 0 && (*str == '-' || *str == '+'))
            sign = 44 - *str;
        else
            break;
        str++;
    }
    nbr *= sign;
    return (nbr > 2147483647 || nbr < -2147483648) ? (0) : ((int)(nbr));
}

int checker_path(int value)
{
    int index = 0;

    for (; value > 1; index++) {
        if ((value % 3) == 0)
            value /= 3;
        else
            return (-1);
    }
    return (index);
}

int main(int ac, char **av)
{
    int size;
    int nb_level;

    if (ac == 3) {
        size = my_getnbr(av[1]);
        nb_level = my_getnbr(av[2]);
        if (size > 0 && nb_level > 0 &&
            checker_path(size) != -1 && nb_level <= checker_path(size))
            menger(nb_level, size, 0, 0);
    }
    return (0);
}