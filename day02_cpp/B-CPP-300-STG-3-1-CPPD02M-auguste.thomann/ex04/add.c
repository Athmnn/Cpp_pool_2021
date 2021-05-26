/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-auguste.thomann
** File description:
** add
*/

#include "castmania.h"

int normal_add(int a, int b)
{
    int res;

    res = a + b;
    return (res);
}

int absolute_add(int a, int b)
{
    int res;

    res = abs(a) + abs(b);
    return (res);
}

void exec_add(addition_t *operation)
{
    if (operation->add_type == NORMAL) {
        operation->add_op.res = normal_add(operation->add_op.a, 
        operation->add_op.b);
        }
    else if (operation->add_type == ABSOLUTE) {
        operation->add_op.res = absolute_add(operation->add_op.a, 
        operation->add_op.b);
        }
}