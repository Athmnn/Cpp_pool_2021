/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-auguste.thomann
** File description:
** mem_ptr
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mem_ptr.h"

void add_str(char *str1, char *str2, char **res)
{
    *res = strcat(strdup(str1), strdup(str2));
}

void add_str_struct(str_op_t *str_op)
{
    str_op->res = strcat(strdup(str_op->str1),
        strdup(str_op->str2));
}