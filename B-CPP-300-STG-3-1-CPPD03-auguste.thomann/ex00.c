/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** ex00
*/

#include "string.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

void func_sub_init(string_t *this)
{
    this->print = &print;
    this->join_c = &join_c;
    this->join_s = &join_s;
    this->substr = &substr;
}

void func_init(string_t *this)
{
    this->assign_s = &assign_s;
    this->assign_c = &assign_c;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_s = &compare_s;
    this->compare_c = &compare_c;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    this->find_s = &find_s;
    this->find_c = &find_c;
    this->insert_c = &insert_c;
    this->insert_s = &insert_s;
    this->to_int = &to_int;
    this->split_s = &split_s;
    this->split_c = &split_c;
    func_sub_init(this);
}

void string_init(string_t *this, const char *s)
{
    func_init(this);
    if (s)
        this->str = strdup(s);
    else
        this->str = NULL;
}

void string_destroy(string_t *this)
{
    if (this && this->str != NULL)
        free(this->str);
}