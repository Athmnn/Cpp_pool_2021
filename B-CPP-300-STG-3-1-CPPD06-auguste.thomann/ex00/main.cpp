/*
** main.cpp for undefined in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD06-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Mon Jan 11 09:21:46 2021 
** Last update Tue Jan 11 10:24:21 2021 
*/

#include <iostream>
#include <fstream>

static int check_files(int ac)
{
    const char *usage = "my_cat: Usage: ./my_cat file [...]";

    if (ac >= 2)
        return(1);
    std::cerr << usage << std::endl;
    return(0);
}

int main(int ac, char **av)
{
    int i;
    char cursor;
    const char *usage = "my_cat: ";
    const char *no_files = ": No such file or directory";

    if (check_files(ac))
        for (i = 1; i < ac; i++) {
            std::ifstream file(av[i]);
            if (!file.is_open())
                std::cerr << usage << av[i] << no_files << std::endl;
            else {
                cursor = file.get();
                while (file.good()) {
                    std::cout << cursor;
                    cursor = file.get();
                }
                file.close();
            }
        }
    return(0);
}