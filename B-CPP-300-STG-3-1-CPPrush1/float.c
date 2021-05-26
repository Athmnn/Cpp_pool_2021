/*
** EPITECH PROJECT, 2021
** B_CPP_300_STG_3_1_CPPrush1_antony_fantapie
** File description:
** Float
*/

#include <stdio.h>
#include "float.h"
#include "new.h"

typedef struct {
    Class   base;
    float value;
    char *infos;
} FloatClass;

static void Float_ctor(FloatClass *this, va_list *args)
{
    if (!this || !args)
        raise("Memory allocation failed");
    this->value = (float)va_arg((*args), double);
    this->infos = NULL;
}

static void Float_dtor(FloatClass *this)
{
    if (!this)
        raise("NMemory allocation failed");
    if (this->infos)
        free(this->infos);
}

static char *Float_str(FloatClass *this)
{
    double size = 0;

    if (!this)
        raise("Memory allocation failed");
    size = snprintf(NULL, 0, "<Float (%f)>", this->value);
    this->infos = malloc(size + 1);
    if (!this->infos)
        raise("Memory allocation failed");
    snprintf(this->infos, size + 1, "<Float (%f)>", this->value);
    return (this->infos);
}

static FloatClass *Float_add(FloatClass const *this, FloatClass const *other)
{
    if (!this || !other)
        raise("Memory allocation failed");
    return new(Float, this->value + other->value);
}

static FloatClass *Float_sub(FloatClass const *this, FloatClass const *other)
{
    if (!this || !other)
        raise("Memory allocation failed");
    return new(Float, this->value - other->value);
}

static FloatClass *Float_mul(FloatClass const *this, FloatClass const *other)
{
    if (!this || !other)
        raise("Memory allocation failed");
    return new(Float, this->value * other->value);
}

static FloatClass *Float_div(FloatClass const *this, FloatClass const *other)
{
    if (!this || !other)
        raise("Memory allocation failed");
    if (other->value == 0)
        raise("Memory allocation failed");
    return new(Float, this->value / other->value);
}

static bool Float_eq(FloatClass const *this, FloatClass const *other)
{
    if (!this || !other)
        raise("Memory allocation failed");
    return (this-> value == other->value);
}

static bool Float_gt(FloatClass const *this, FloatClass const *other)
{
    if (!this || !other)
        raise("Memory allocation failed");
    return (this->value > other->value);
}

static bool Float_lt(FloatClass const *this, FloatClass const *other)
{
    if (!this || !other)
        raise("Memory allocation failed");
    return (this->value < other->value);
}

static const FloatClass _description = {
    {
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&Float_ctor,
        .__dtor__ = (dtor_t)&Float_dtor,
        .__str__ = (to_string_t)&Float_str,
        .__add__ = (binary_operator_t)&Float_add,
        .__sub__ = (binary_operator_t)&Float_sub,
        .__mul__ = (binary_operator_t)&Float_mul,
        .__div__ = (binary_operator_t)&Float_div,
        .__eq__ = (binary_comparator_t)&Float_eq,
        .__gt__ = (binary_comparator_t)&Float_gt,
        .__lt__ = (binary_comparator_t)&Float_lt
    },
    .value = 0,
};

const Class *Float = (const Class *)&_description;
