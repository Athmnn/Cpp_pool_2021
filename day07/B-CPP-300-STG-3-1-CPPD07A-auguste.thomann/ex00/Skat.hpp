/*
** Skat.cpp for day07 in /home/auguste/delivery/tek2/CPP_pool/day07/B-CPP-300-STG-3-1-CPPD07A-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 13 20:21:48 2021 
** Last update Thu Jan 13 21:28:15 2021 
*/

#ifndef SKAT_H_
    #define SKAT_H_

    #include <string>
    #include <iostream>

    class Skat {
        private:
            std::string _name;
            int _stimPaks;
        
        public:
            Skat(std::string const&, int);
            Skat(std::string const&);
            Skat(int);
            Skat();
            ~Skat();
            int &stimPaks();
            const std::string &name() const;
            void shareStimPaks(int, int&);
            void addStimPaks(unsigned int);
            void useStimPaks();
            void status() const;
    };

#endif 