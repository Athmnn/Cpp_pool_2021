/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-auguste.thomann
** File description:
** ptr_tricks
*/

#include "ptr_tricks.h"

int get_array_nb_elem(const int *ptr1, const int *ptr2)
{
    int tmp1 = ptr1;
    int tmp2 = ptr2;
    int calc = 0;

    for (; tmp1 != tmp2; calc++) {
        tmp1++;
    }
    if ((calc / 4) >= 0)
        return (calc / 4);
    if ((calc / 4) <= 0)
        return ((calc / 4) * -1);
}

whatever_t *get_struct_ptr(const int *member_ptr)
{
    whatever_t tmp;

    return (member_ptr - (&tmp.member - (int *)&tmp));
}