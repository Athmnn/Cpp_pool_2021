/*
** main.cpp for undefined in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD08-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 13 11:24:35 2021 
** Last update Thu Jan 13 15:50:48 2021 
*/

#include "Droid.hpp"
#include "DroidMemory.hpp"

int main ()
{
DroidMemory mem1 ;
mem1 += 42;
DroidMemory mem2 = mem1 ;
std :: cout << mem1 << std :: endl ;
DroidMemory mem3 ;
mem3 << mem1 ;
mem3 >> mem1 ;
mem3 << mem1 ;
std :: cout << mem3 << std :: endl ;
std :: cout << mem1 << std :: endl ;
}