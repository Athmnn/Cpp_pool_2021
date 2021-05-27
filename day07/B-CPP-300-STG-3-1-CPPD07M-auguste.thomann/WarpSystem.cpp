/*
** WarpSystem.cpp for B-CPP-300-STG-3-1-CPPD07M-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/day07/B-CPP-300-STG-3-1-CPPD07M-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 13 09:11:24 2021 
** Last update Thu Jan 13 09:11:27 2021 
*/

#include "WarpSystem.hpp"

bool WarpSystem::QuantumReactor::isStable() const
{
    return _stabilty;
}

void WarpSystem::QuantumReactor::setStability(bool const visibility)
{
    _stabilty = visibility;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor() const
{
    return _coreReactor;
}

WarpSystem::Core::Core(QuantumReactor *quantumReactor): _coreReactor{quantumReactor}
{}
