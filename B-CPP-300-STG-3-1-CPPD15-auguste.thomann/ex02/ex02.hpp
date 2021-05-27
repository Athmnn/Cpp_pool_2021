/*
** ex02.hpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD15-auguste.thomann/ex02
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 20 10:02:08 2021 
** Last update Thu Jan 20 10:28:24 2021 
*/

#include <iostream>

#ifndef EX02_HPP_
#define EX02_HPP_

int min(int A, int B)
{
    std::cout << "non-template min" << std::endl;
    if (A <= B)
        return(A);
    if(A > B)
        return(B);
}

int nonTemplateMin(int * tab, int size)
{
    int m = tab[0];
    for (int i = 1; i < size; i++)
        m = min(m, tab[i]);
    return(m);
}

template<typename Template>
const Template &min(const Template & A, const Template & B)
{
    std::cout << "template min" << std::endl;
    if (A <= B)
        return(A);
    if (A > B)
        return(B);
}

template<typename Template>
const Template &templateMin(const Template * tab, int size)
{
    Template &m = const_cast<Template&>(tab[0]);
    for (int i = 1; i < size; i++)
        m = min<Template>(m, tab[i]);
    return(m);
}

#endif
