/*
** EPITECH PROJECT, 2021
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct {
    Class   base;
    int     x, y;
    char  *infos;
} PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    if (this == NULL || args == NULL)
        raise("NULL POINTER");
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this_)
{
    PointClass *this = (PointClass *)this_;

    if (this == NULL)
        raise("NULL POINTER");
    free(this->infos);
}

static char *Point_str(Object *this_)
{
    int size;
    PointClass *this = (PointClass *)this_;

    if (this == NULL)
        raise("Bad alloc at Point_str");
    if (this->infos != NULL)
        free(this->infos);
    size = snprintf(NULL, 0, "<Point (%d, %d)>", this->x, this->y);
    this->infos = malloc(size + 1);
    if (this->infos == NULL)
        raise("Bad alloc at Point_str");
    snprintf(this->infos, size + 1, "<Point (%d, %d)>", this->x, this->y);
    return (this->infos);
}

static Object *Point_add(Object const *pc1_, Object const *pc2_)
{
    PointClass *result = new(Point, 0, 0);
    PointClass *pc1 = (PointClass *)pc1_;
    PointClass *pc2 = (PointClass *)pc2_;

    result->x = pc1->x + pc2->x;
    result->y = pc1->y + pc2->y;
    return (result);
}

static Object *Point_sub(Object const *pc1_, Object const *pc2_)
{
    PointClass *result = new(Point, 0, 0);
    PointClass *pc1 = (PointClass *)pc1_;
    PointClass *pc2 = (PointClass *)pc2_;

    result->x = pc1->x - pc2->x;
    result->y = pc1->y - pc2->y;
    return (result);
}

// Create additional functions here

static const PointClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = &Point_str,
        .__add__ = &Point_add,
        .__sub__ = &Point_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .infos = NULL
};

const Class   *Point = (const Class *)&_description;
