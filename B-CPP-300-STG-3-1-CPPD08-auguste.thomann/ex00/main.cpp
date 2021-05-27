/*
** main.cpp for undefined in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD08-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 13 11:24:35 2021 
** Last update Thu Jan 13 15:37:19 2021 
*/

#include "Droid.hpp"

int main ()
{
Droid d ;
Droid d1 (" Avenger ") ;
size_t Durasel = 200;
std :: cout << d << std :: endl ;
std :: cout << d1 << std :: endl ;
d = d1 ;
d . setStatus (new std :: string (" Kill Kill Kill !") ) ;
d << Durasel ;
std :: cout << d << " --" << Durasel << std :: endl ;
Droid d2 = d ;
d . setId ("Rex") ;
std :: cout << ( d2 != d ) << std :: endl ;
return 0;

std::cout << "--------- memery test ---------" << std::endl;

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