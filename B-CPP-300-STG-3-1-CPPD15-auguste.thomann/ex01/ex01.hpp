/*
** ex01.hpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD15-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 20 09:33:57 2021 
** Last update Thu Jan 20 10:05:20 2021 
*/

#ifndef EX01_HPP_
#define EX01_HPP_

#include <string>
#include <cstring>

template <typename Template>
int compare(const Template &A, const Template &B)
{
    if (A > B)
        return (1);
    if (A == B)
        return (0);
    if (A < B)
        return (-1);
}

template <typename Template>
int compare(const char *const &A, const char *const &B)
{
    int result = std::strcmp(A, B);
    if (result > 0)
        return (1);
    else if (result < 0)
        return (-1);
    return (0);
}

#endif