/*
** main.cpp for B-CPP-300-STG-3-1-CPPD15-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD15-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 20 10:48:34 2021 
** Last update Thu Jan 20 10:49:21 2021 
*/

#include "ex03.hpp"

int main()
{
    int tab[] = {11, 3, 89, 42};
    foreach (tab, print<int>, 4)
        ;
    std ::string tab2[] = {"j'", " aime ", "les", " templates ", "!"};
    foreach (tab2, print, 5)
        ;
    return 0;
}