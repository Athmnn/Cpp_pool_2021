/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-auguste.thomann
** File description:
** menger
*/

#include <stdio.h>

void calc_fract(int level, int div, int abscissa, int orderly)
{
    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            if (x != 1 || y != 1)
                menger(level - 1, div, x * div + abscissa, y * div + orderly);
}

int menger(int level, int size, int abscissa, int orderly)
{
    int div = size / 3;

    if (level > 0)
        printf("%03d %03d %03d\n", div, div + abscissa, div + orderly);
    if (level > 1)
        calc_fract(level, div, abscissa, orderly);
    return (0);
}