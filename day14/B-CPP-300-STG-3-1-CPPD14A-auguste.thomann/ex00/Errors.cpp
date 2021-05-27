/*
** Error.cpp for ex00 in /home/auguste/delivery/tek2/CPP_pool/day14/B-CPP-300-STG-3-1-CPPD14A-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Tue Jan 19 14:56:22 2021 
** Last update Wed Jan 19 15:35:06 2021 
*/

#include "Errors.hpp"

NasaError::NasaError(std::string const &message, std::string const &component)
{
    this->_message = message;
    this->_component = component;
}

MissionCriticalError::MissionCriticalError(std::string const &message, std::string const &component) : NasaError(message, component)
{
}

LifeCriticalError::LifeCriticalError(std::string const &message, std::string const &component) : NasaError(message, component)
{
}

UserError::UserError(std::string const &message, std::string const &component) : NasaError(message, component)
{
}

CommunicationError::CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice")
{
}

const char *NasaError::what() const noexcept
{
    return (_message.c_str());
}

std::string const &NasaError::getComponent() const
{
    return (_component);
}