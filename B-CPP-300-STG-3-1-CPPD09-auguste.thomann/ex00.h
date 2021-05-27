/*
** ex00.h for B-CPP-300-STG-3-1-CPPD09-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD09-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 14 20:54:30 2021 
** Last update Thu Jan 14 20:54:30 2021 
*/
#ifndef CPP_D09_2019_EX00_H
#define CPP_D09_2019_EX00_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct cthulhu_s {
    int m_power;
    char *m_name;
} cthulhu_t;

typedef struct koala_s {
    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t;

cthulhu_t *new_cthulhu();
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);

koala_t * new_koala(char *name, char is_a_legend);
void eat(koala_t *this);

#endif //CPP_D09_2019_EX00_H
