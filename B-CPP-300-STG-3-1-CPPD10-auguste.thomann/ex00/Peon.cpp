/*
** Peon.cpp for B-CPP-300-STG-3-1-CPPD10-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 09:27:37 2021 
** Last update Fri Jan 15 09:27:37 2021 
*/

#include "Peon.hpp"

Peon::Peon(const std::string& name) : Victim(name), name(name) {
  std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
  std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const {
std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

