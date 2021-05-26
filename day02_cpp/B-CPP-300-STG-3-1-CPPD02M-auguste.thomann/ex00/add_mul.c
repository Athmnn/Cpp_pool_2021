/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-auguste.thomann
** File description:
** add_mul
*/

#include <stdio.h>

void add_mul_4param(int first, int second, int *add, int *mul)
{
    *mul = first * second;
    *add = first + second;
}

void add_mul_2param(int *first, int *second)
{
    *first = *first + *second;
    *second = (*first - *second) * *second;
}