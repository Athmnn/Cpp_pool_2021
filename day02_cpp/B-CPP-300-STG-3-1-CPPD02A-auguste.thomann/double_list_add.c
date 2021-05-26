/*
** EPITECH PROJECT, 2021
** CPP-D02A [WSL: Ubuntu]
** File description:
** double_list_add
*/

#include "double_list.h"
#include <stdlib.h>
#include <stdio.h>

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t new = malloc(sizeof(*new));
    double_list_t tmp = *front_ptr;

    if (new == NULL)
        return (false);
    new->value = elem;
    (*front_ptr == NULL) ? (new->next = NULL) : (new->next = tmp);
    *front_ptr = new;
    return (true);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    double_list_t new = malloc(sizeof(*new));
    double_list_t tmp = *front_ptr;

    if (new == NULL)
        return (false);
    if (*front_ptr == NULL)
        return (double_list_add_elem_at_front(front_ptr, elem));
    new->next = NULL;
    new->value = elem;
    tmp = *front_ptr;
    while (tmp->next != NULL)
        tmp = tmp->next;
    new->next = new;
    return (true);
}

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
unsigned int position)
{
    double_list_t tmp;

    if (front_ptr == NULL || position == 0)
        return (double_list_add_elem_at_front(front_ptr, elem));
    tmp = malloc(sizeof(*tmp));
    if (tmp == NULL)
        return (false);
    for (; position; position)
    {
        if (position == 0)
        {
            tmp->next = *front_ptr;
            *front_ptr = tmp;
        }
        else
            front_ptr = &(*front_ptr)->next;
    }
    return (true);
}