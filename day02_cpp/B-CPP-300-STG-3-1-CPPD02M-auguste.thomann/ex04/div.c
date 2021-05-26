/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-auguste.thomann
** File description:
** div
*/

#include "castmania.h"

int integer_div(int a, int b)
{
    if (b == 0)
        return (0);
    return (a / b);
}

float decimale_div(int a, int b)
{
    if (b == 0)
        return (0);
    return ((float)a / (float)b);
}

void exec_div(division_t *operation)
{
    if (operation->div_type == INTEGER) {
        ((integer_op_t *)operation->div_op)->res = 
        integer_div(((integer_op_t *)operation->div_op)->a,
        ((integer_op_t *)operation->div_op)->b);
    }
    else if (operation->div_type == DECIMALE) {
        ((decimale_op_t *)operation->div_op)->res = 
        decimale_div(((decimale_op_t *)operation->div_op)->a,
        ((decimale_op_t *)operation->div_op)->b);
    }
}