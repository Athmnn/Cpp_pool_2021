/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main file
*/

#include "double_list.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int double_list_get_size(double_list_t list)
{
    double_list_t tmp = list;
    int i = 0;

    while (tmp != NULL) {
        i++;
        tmp = tmp->next;   
    }
    return (i);
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return (true);
    return (false);
}

void double_list_dump(double_list_t list)
{

    if (list != NULL)
        printf("%d\n", list->value);
        for(int i = 0; list->next != NULL; i++); {
        list = list->next;
        printf("%d\n", list->value);
    }
}