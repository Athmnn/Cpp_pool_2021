/*
** main.cpp for ex01 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 15:46:06 2021 
** Last update Sat Jan 15 16:05:35 2021 
*/
#include "PlasmaRifle.hpp"
#include "AEnemy.hpp"
#include "AWeapon.hpp"
#include "Character.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"

int main()
{
    const auto preda = new Character(" Predator ");
    const auto prey = new RadScorpion();
    std ::cout << *preda;
    AWeapon *pr(new PlasmaRifle());
    AWeapon *pf(new PowerFist());
    preda -> equip(pr);
    std ::cout << *preda;
    preda -> equip(pf);
    preda -> attack(prey);
    std ::cout << *preda;
    preda -> equip(pr);
    std ::cout << *preda;
    preda -> attack(prey);
    std ::cout << *preda;
    preda -> attack(prey);
    std ::cout << *preda;
    return 0;
}