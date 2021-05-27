/*
** main.cpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD13-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 18 10:07:15 2021 
** Last update Tue Jan 18 10:08:45 2021 
*/

#include "Toy.hpp"
#include "Picture.hpp"

int main()
{
    Toy toto;
    Toy ET(Toy::ALIEN, "green", "./nique.txt");

    toto.setName("TOTO !");

    if (toto.getType() == Toy::BASIC_TOY)
        std::cout << "basic toy: " << toto.getName() << std::endl
                  << toto.getAscii() << std::endl;
    if (ET.getType() == Toy::ALIEN)
        std::cout << "this alien is: " << ET.getName() << std::endl
                  << ET.getAscii() << std::endl;
    return 1337;
}