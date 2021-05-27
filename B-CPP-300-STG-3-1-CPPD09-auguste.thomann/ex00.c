/*
** ex00.c for B-CPP-300-STG-3-1-CPPD09-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD09-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 14 20:54:20 2021 
** Last update Thu Jan 14 20:54:20 2021 
*/

#include "ex00.h"

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend)
{
    this->m_parent.m_name = strdup(_name);
    this->m_is_a_legend = _is_A_Legend;
    if (_is_A_Legend == 1)
        this->m_parent.m_power = 42;
    else if (_is_A_Legend == 0)
        this->m_parent.m_power = 0;
    printf("Building %s\n", _name);
}

static void cthulhu_initializer(cthulhu_t *this)
{
    this->m_name = "Cthulhu";
    this->m_power = 42;
    printf("----\n");
    printf("Building Cthulhu\n");
}

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *koala = malloc(sizeof(koala_t));
    if (koala == NULL)
        return (NULL);
    cthulhu_initializer(&koala->m_parent);
    koala_initializer(koala, name, is_a_legend);
    return (koala);
}

void eat(koala_t *this)
{
    printf("%s eats\n", this->m_parent.m_name);
    this->m_parent.m_power += 42;
}

cthulhu_t *new_cthulhu()
{
    cthulhu_t *cthulhu = malloc(sizeof(cthulhu_t));
    if (cthulhu == NULL)
        return (NULL);
    cthulhu_initializer(cthulhu);
    return (cthulhu);
}

void print_power(cthulhu_t *this)
{
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t *this)
{
    if (this->m_power >= 42)
    {
        this->m_power -= 42;
        printf("%s attacks and destroys the city\n", this->m_name);
    }
    else
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void sleeping(cthulhu_t *this)
{
    printf("%s sleeps\n", this->m_name);
    this->m_power += 42000;
}