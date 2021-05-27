/*
** my_convert_temp.cpp for B-CPP-300-STG-3-1-CPPD06-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD06-auguste.thomann/ex01
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 11 10:48:31 2021 
** Last update Tue Jan 11 11:29:22 2021 
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

void calcul(float value, int temp)
{
    float degree;

    if (temp == 1)
    {
        degree = value * 9.0 / 5.0 + 32;
        std::cout << std::setw(16) << std::fixed << std::setprecision(3) << degree << std::setw(16) << "Fahrenheit" << std::endl;
    }
    else
    {
        degree = 5.0 / 9.0 * (value - 32);
        std::cout << std::setw(16) << std::fixed << std::setprecision(3) << degree << std::setw(16) << "Celsius" << std::endl;
    }
}

int check_sort(std::string type)
{
    if (type == "Celsius")
        return 1;
    if (type == "Fahrenheit")
        return 2;
    else
        return 0;
}

int main(int ac, char **av)
{
    float temp_value;
    std::string temp_type;

    std::cin >> temp_value >> temp_type;
    if (std::cin.fail() || check_sort(temp_type) == 0)
    {
        std::cerr << "Bad input !" << std::endl;
        return 1;
    }
    calcul(temp_value, check_sort(temp_type));
    return 0;
}