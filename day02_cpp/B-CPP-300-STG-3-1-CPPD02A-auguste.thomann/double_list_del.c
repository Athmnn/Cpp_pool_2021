/*
** EPITECH PROJECT, 2021
** CPP-D02A [WSL: Ubuntu]
** File description:
** double_list_del
*/

#include "double_list.h"
#include <stdlib.h>
#include <stdio.h>

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    double_list_t new = malloc(sizeof( *new));
    double_list_t tmp = *front_ptr;

    if (front_ptr == NULL)
        


}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    double_list_t tmp1 = NULL;
    double_list_t tmp2 = NULL;

    if ((*front_ptr) == NULL)
        return (false);
    tmp1 = (*front_ptr);
    tmp2 = (*front_ptr);
    while(tmp1->next != NULL) {
        tmp2 = tmp1;
        tmp1 = tmp1->next;
    }
    if(tmp1 == (*front_ptr)) {
        (*front_ptr) = NULL;
    } else {
        tmp2->next = NULL;
    }
    free(tmp1);
    return (true);
}

bool double_list_del_elem_at_position(double_list_t *front_ptr,
                                    unsigned int position)
{
    double_list_t tmp1 = NULL;
    double_list_t tmp2 = NULL;

    if ((*front_ptr) == NULL)
        return (false);
    tmp1 = (*front_ptr);
    if (position == 0) {
        (*front_ptr) = tmp1->next;
        free(tmp1);
        return (true);
    }
    for (unsigned int i = 0; tmp1->next != NULL && i < position - 1; i++)
        tmp1 = tmp1->next;
    tmp2 = tmp1->next->next;
    free(tmp1->next);
    tmp1->next = tmp2;
    return (true);
}