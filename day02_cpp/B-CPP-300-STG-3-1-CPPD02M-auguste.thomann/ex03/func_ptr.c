/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD02M-auguste.thomann
** File description:
** func_ptr
*/

#include <string.h>
#include <stdio.h>
#include <string.h>
#include "func_ptr.h"
#include "func_ptr_enum.h"
#include <ctype.h>

void print_normal(char const *str)
{
    printf("%s\n", str);
}

void print_reverse(char const *str)
{
    for (int i = strlen(str) - 1; i != -1; i--)
        printf("%c", str[i]);
    printf("\n");
}

void print_upper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && !isupper(str[i]))
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i]);
    }
    printf("\n");
}

void print_42(char const *str)
{
    printf("42\n");
}

void do_action(action_t action, char const *str)
{
    void (*ptr[4])(char const *) = {print_normal,
        print_reverse, print_upper, print_42};
    ptr[action](str);
}