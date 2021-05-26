/*
** EPITECH PROJECT, 2021
** CPP-D02A [WSL: Ubuntu]
** File description:
** double_list_get
*/

#include "double_list.h"
#include <stdlib.h>
#include <stdio.h>

double double_list_get_elem_at_front(double_list_t list)
{
    return (list->value);
}

double double_list_get_elem_at_back(double_list_t list)
{
    while (list->next != NULL)
        list = list->next;
    return (list->value);
}

double double_list_get_elem_at_position(double_list_t list,
unsigned int position)
{
    for (int i = 0; i <=position; i++)
    {
        if(list == NULL)
            return(0);
            list = list->next;
    }
    return(list->value);
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
double value)
{
    if (list == NULL)
        return (list);
    while (list->value != value) {
        if (list -> value == value)
            return(list);
        list = list->next;
    }
    return (NULL);
}