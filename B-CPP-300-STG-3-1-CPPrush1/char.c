/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPrush1_antony_fantapie
** File description:
** Char
*/

#include <stdio.h>
#include "char.h"
#include "new.h"

typedef struct {
    Class base;
    char c;
    char *infos;
} CharClass;

static void Char_ctor(CharClass *this, va_list *args)
{
    if (this == NULL || args == NULL)
        raise("Memory allocation failed.");
    this->c = va_arg(*args, int);
    this->infos = NULL;
}

static void Char_dtor(CharClass *this)
{
    if (this == NULL)
        raise("Can't destruct Null.");
    free(this->infos);
}

static Object *Char_add(Object const *c1_, Object const *c2_)
{
    CharClass *c1 = (CharClass *)c1_;
    CharClass *c2 = (CharClass *)c2_;

    if (!c1 || !c2)
        raise("Memory allocation failed");
    return new(Char, c1->c + c2->c);
}

static Object *Char_sub(Object const *c1_, Object const *c2_)
{
    CharClass *c1 = (CharClass *)c1_;
    CharClass *c2 = (CharClass *)c2_;

    if (!c1 || !c2)
        raise("Memory allocation failed");
    return new(Char, c1->c - c2->c);
}

static Object *Char_mul(Object const *c1_, Object const *c2_)
{
    CharClass *c1 = (CharClass *)c1_;
    CharClass *c2 = (CharClass *)c2_;

    if (!c1 || !c2)
        raise("Memory allocation failed");
    return new(Char, c1->c * c2->c);
}

static Object *Char_div(Object const *c1_, Object const *c2_)
{
    CharClass *c1 = (CharClass *)c1_;
    CharClass *c2 = (CharClass *)c2_;

    if (!c1 || !c2)
        raise("Memory allocation failed");
    if (c2->c == 0)
        raise("Memory allocation failed");
    return new(Char, c1->c / c2->c);
}

static bool Char_eq(Object const *c1_, Object const *c2_)
{
    CharClass *c1 = (CharClass *)c1_;
    CharClass *c2 = (CharClass *)c2_;

    if (!c1 || !c2)
        raise("Memory allocation failed");
    return (c1->c == c2->c);
}

static bool Char_gt(Object const *c1_, Object const *c2_)
{
    CharClass *c1 = (CharClass *)c1_;
    CharClass *c2 = (CharClass *)c2_;

    if (!c1 || !c2)
        raise("Memory allocation failed");
    return (c1->c > c2->c);
}

static bool Char_lt(Object const *c1_, Object const *c2_)
{
    CharClass *c1 = (CharClass *)c1_;
    CharClass *c2 = (CharClass *)c2_;

    if (!c1 || !c2)
        raise("Memory allocation failed");
    return (c1->c < c2->c);
}

static char *Char_str(Object *this_)
{
    int size = 0;
    CharClass *this = (CharClass *)this_;

    if (!this)
        raise("Memory allocation failed");
    size = snprintf(NULL, 0, "<Char (%c)>", this->c);
    this->infos = malloc(sizeof(char) * size + 1);
    if (!this->infos)
        raise("Memory allocation failed");
    snprintf(this->infos, size + 1, "<Char (%c)>", this->c);
    return (this->infos);
}

static const CharClass _description = {
    {
        .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&Char_ctor,
        .__dtor__ = (dtor_t)&Char_dtor,
        .__str__ = &Char_str,
        .__add__ = &Char_add,
        .__sub__ = &Char_sub,
        .__mul__ = &Char_mul,
        .__div__ = &Char_div,
        .__eq__ = &Char_eq,
        .__gt__ = &Char_gt,
        .__lt__ = &Char_lt
    },
    .c = 0,
    .infos = NULL
};

const Class   *Char = (const Class *)&_description;