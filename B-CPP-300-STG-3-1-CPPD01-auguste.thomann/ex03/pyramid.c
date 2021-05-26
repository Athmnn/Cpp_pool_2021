s
/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD01-auguste.thomann
** File description:
** pyramid
*/

#include <stdio.h>


int min(int a, int b)
{
    if (a <= b)
        return (a);
    else
        return (b);
}

static int **malloc_tmp(int size)
{
    int **tmp = malloc(size * sizeof(int *));

    for(int i = 0; i < size; i++)
        tmp[i] = malloc(sizeof(int) * (i + 1));
    for (int i = size - 1; i != -1; i--)
        for (int j = 0; j < i + 1; j++)
            tmp[i][j] = 0;
    return (tmp);
}

int pyramid_path(int size, const int **map)
{
    int **tmp = malloc_tmp(size);

    for (int i = size - 1; i != -1; i--) {
        for (int j = 0; j < i + 1; j++) {
            if (i == size - 1)
                tmp[i][j] = map[i][j];
            else
                tmp[i][j] = map[i][j] + min(tmp[i+1][j], tmp[i + 1][j + 1]);
        }
    }
    return (tmp[0][0]);
}
