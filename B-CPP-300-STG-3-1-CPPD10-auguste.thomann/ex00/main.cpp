/*
** main.cpp for B-CPP-300-STG-3-1-CPPD10-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 09:28:33 2021 
** Last update Fri Jan 15 09:28:33 2021 
*/
#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"

int main ()
{
Sorcerer robert ("Robert", "the Magnificent") ;
Victim jim ("Jimmy") ;
Peon joe ("Joe") ;
std :: cout << robert << jim << joe ;
robert . polymorph ( jim ) ;
robert . polymorph ( joe ) ;
return 0;
}