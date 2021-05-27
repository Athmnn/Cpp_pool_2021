/*
** EPITECH PROJECT, 2020
** Sarah-Keppler
** SModuleOS.hpp
*/

#ifndef SFML_MODULE_OS
#define SFML_MODULE_OS

#include <ncurses.h>
#include <string>
//#include "ModuleOS.hpp"

class SModuleOs //: public ModuleOS
{
public:
    SModuleOs() = default;
    ~SModuleOs() = default;
    
    //void update() noexcept;
    void print() const noexcept;
    
private:
    std::string const _title = "OS";

    // From protected
    //unsigned int            _id;
    //bool                    _status;
    //ProcFs::SystemInfos     _report;
    std::string             _osName = "Linux";
    std::string             _kernelName = "Linux KERNEL";
    std::string             _hostname = "Sosoh";
    std::string             _username = "Lucas";
    std::string             _date = "10/01/1999";
};

#endif /*SFML_MODULE_OS*/
