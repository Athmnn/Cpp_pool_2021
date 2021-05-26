/*
** EPITECH PROJECT, 2024
** B_CPP_300_STG_3_1_CPPrush1_antony_fantapie
** File description:
** Created by antonyftp,
*/

#include <stdarg.h>
#include <stdlib.h>
#include "new.h"

Object *va_check(Class const *class, va_list* ap, Object *new)
{
    if (class == NULL)
        raise("Invalid class name.");
    if (ap == NULL)
        raise("Invalid args list.");
    if (class->__size__ <= 0)
        raise("Invalid class size");
    new = malloc(class->__size__);
    if (!new)
        raise("Memory allocation failed");

    return (new);
}

Object *va_new(Class const *class, va_list* ap)
{
    Object *new = NULL;

    new = va_check(class, ap, new);
    memcpy(new, class, class->__size__);
    if (((Class *)new)->__ctor__)
        ((Class *)new)->__ctor__(new, ap);

    return (new);
}

Object *new(Class const *class, ...)
{
    Object *new = NULL;
    va_list ls;

    va_start(ls, class);    
    new = va_new(class, &ls);
    va_end(ls);
    
    return (new);
}

void delete(Object *ptr)
{
    if (ptr != NULL && ((Class *)ptr)->__dtor__ != NULL) {
        ((Class *) ptr)->__dtor__(ptr);
    }
    free(ptr);
}