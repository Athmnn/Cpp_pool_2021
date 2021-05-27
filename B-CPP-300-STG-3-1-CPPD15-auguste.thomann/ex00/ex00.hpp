/*
** ex00.hpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD15-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 20 09:16:05 2021 
** Last update Wed Jan 20 09:16:05 2021 
*/


#ifndef EX00_HPP
#define EX00_HPP

#include <iostream>

template <typename Template>
void swap(Template &A, Template &B) {
    Template tmp;
    tmp = A;
    A = B;
    B = tmp;
}

template <typename Template>
Template add(Template const& A, Template const& B) {
    return A + B;
}

template <typename Template>
const Template& min(Template const& A, Template const& B) {
    return A < B ? A : B;
}

template <typename Template>
const Template& max(Template const& A, Template const& B) {
    return A > B ? A : B;
}

#endif