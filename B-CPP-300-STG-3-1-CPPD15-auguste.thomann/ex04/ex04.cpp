/*
** ex04.cpp for B-CPP-300-STG-3-1-CPPD15-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD15-auguste.thomann/ex04
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 20 12:30:27 2021 
** Last update Thu Jan 20 20:45:38 2021 
*/

#include <string>
#include "ex04.hpp"

template<typename T>
bool equal(T const &a, T const &b)
{
    return a == b;
}

template<typename T>
bool Tester<T>::equal(T const &a, T const &b) {
    return a == b;
}


template bool equal<int>(int const &a, int const &b);
template bool equal<float>(float const &a, float const &b);
template bool equal<double>(double const &a, double const &b);
template bool equal<std::string>(std::string const &a, std::string const &b);
template class Tester<int>;
template class Tester<float>;
template class Tester<double>;
template class Tester<std::string>;