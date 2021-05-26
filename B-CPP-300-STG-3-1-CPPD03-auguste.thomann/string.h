/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD03-auguste.thomann
** File description:
** string
*/

#ifndef B_CPP_300_STG_3_1_CPPRUSH1_AUGUSTE_THOMANN_STRING_H
#define B_CPP_300_STG_3_1_CPPRUSH1_AUGUSTE_THOMANN_STRING_H

#include <stddef.h>

typedef struct string_s string_t;

struct string_s {
    void (*string_init)(string_t *, const char *);
    void (*string_destroy)(string_t *);
    void (*assign_s)(string_t *, const string_t *);
    void (*assign_c)(string_t *, const char *);
    void (*append_s)(string_t *, const string_t *);
    void (*append_c)(string_t *, const char *);
    char (*at)(const string_t *, size_t);
    void (*clear)(string_t *);
    int (*size)(const string_t *);
    int (*compare_s)(const string_t *, const string_t *);
    int (*compare_c)(const string_t *, const char *);
    size_t (*copy)(const string_t *, char *, size_t, size_t);
    const char *(*c_str)(const string_t*);
    int (*empty)(const string_t *);
    int (*find_s)(const string_t *, const string_t *, size_t);
    int (*find_c)(const string_t *, const char *, size_t);
    void (*insert_c)(string_t *, size_t, const char *);
    void (*insert_s)(string_t *, size_t, const string_t *);
    int (*to_int)(const string_t *);
    string_t **(*split_s)(const string_t *, char);
    char **(*split_c)(const string_t *, char);
    void (*print)(const string_t *);
    void (*join_c)(string_t *, char, const char *const *);
    void (*join_s)(string_t *, char, const string_t *const *);
    string_t *(*substr)(const string_t *, int, int);
    char *str;
};

void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);

void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);

void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);

char at(const string_t *this , size_t pos);

void clear(string_t* this);

int size(const string_t *this);

int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);

size_t copy(const string_t *this, char *s, size_t n, size_t pos);

const char* c_str(const string_t* this);

int empty(const string_t *this);

int find_s(const string_t *this , const string_t *str , size_t pos);
int find_c(const string_t *this, const char *str, size_t pos);

void insert_c(string_t *this, size_t pos, const char *str);
void insert_s(string_t *this, size_t pos, const string_t *str);

int to_int(const string_t *this);

string_t **split_s(const string_t *this, char separator);
char **split_c(const string_t *this, char separator);

void print(const string_t *this);

void join_c(string_t *this, char delim, const char *const *tab);
void join_s(string_t *this, char delim, const string_t *const *tab);

string_t *substr(const string_t *this, int offset, int length);

#endif //B_CPP_300_STG_3_1_CPPRUSH1_ANTONY_FANTAPIE_STRING_H
