/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-auguste.thomann
** File description:
** tab_to_2dtab
*/

#include <stdlib.h>
#include <stdio.h>

void tab_to_2dtab(int *tab, int length, int width, int ***res)
{
    int i = 0;
    int j = 0;

    *res = malloc(sizeof(int *) * (length * width));
    for (int i = 0; i < length; i++) {
        (*res)[i] = malloc(width * sizeof(int));
        for (int j = 0; j < width; j++) {
            (*res)[i][j] = tab[i * width + j];
        }
    }
}