/*
** DomesticKoala.cpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD16-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Thu Jan 21 20:04:13 2021 
** Last update Thu Jan 21 20:04:13 2021 
*/

#include "DomesticKoala.hpp"

DomesticKoala::DomesticKoala(KoalaAction &koala_action) : _knowAction(256)
{
    this->_action = koala_action;
}

DomesticKoala::DomesticKoala(const DomesticKoala &domestic_koala)
{
    this->_action = domestic_koala._action;
    this->_knowAction = domestic_koala._knowAction;
}

DomesticKoala::~DomesticKoala()
{

}

const std::vector<DomesticKoala::methodPointer_t> *DomesticKoala::getActions() const
{
    return(&this->_knowAction);
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    this->_knowAction[command] = nullptr;
}

void DomesticKoala::learnAction(unsigned char command, methodPointer_t action)
{
    this->_knowAction[command] = action;
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
    methodPointer_t func = _knowAction[command];
    if (func)
        (_action.*func)(param);
}

void DomesticKoala::setKoalaAction(KoalaAction &koala_action)
{
    this->_action = koala_action;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &domestic_koala)
{
    this->_action = domestic_koala._action;
    this->_knowAction = domestic_koala._knowAction;
    return (*this);
}
