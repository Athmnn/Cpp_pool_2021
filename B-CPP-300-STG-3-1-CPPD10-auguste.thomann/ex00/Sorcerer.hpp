/*
** Sorcerer.hpp for B-CPP-300-STG-3-1-CPPD10-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD10-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 15 09:26:09 2021 
** Last update Sat Jan 15 09:26:11 2021 
*/

#ifndef SORCERER_HPP_
#define SORCERER_HPP_

#include <iostream>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
protected:

  const std::string name;
  const std::string title;

public:

  Sorcerer(const std::string &, const std::string &);
  ~Sorcerer();


  const std::string &getName() const;
  const std::string &getTitle() const;

  virtual void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &, Sorcerer const &);

#endif
