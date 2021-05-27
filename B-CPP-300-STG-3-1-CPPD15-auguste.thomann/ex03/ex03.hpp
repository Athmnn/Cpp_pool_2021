/*
** ex03.hpp for B-CPP-300-STG-3-1-CPPD15-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD15-auguste.thomann/ex03
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 20 10:24:52 2021 
** Last update Thu Jan 20 12:26:49 2021 
*/

#ifndef EX03_HPP_
#define EX03_HPP_

template <typename Template>
void foreach (Template *A, void (&Ptr)(const Template &elem), int size)
{
    for (int i = 0; i < size; i++)
        Ptr(A[i]);
}

template <typename Template>
void print(const Template &A)
{
    std::cout << A << std::endl;
}

#endif