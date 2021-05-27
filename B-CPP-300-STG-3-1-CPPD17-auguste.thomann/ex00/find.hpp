/*
** find.hpp for ex05 in /home/auguste/delivery/tek2/CPP_pool/B-CPP-300-STG-3-1-CPPD17-auguste.thomann/ex00
**
** Made by 
** Login   <>
**
** Started on  Fri Jan 22 09:07:04 2021 
** Last update Sat Jan 22 09:30:40 2021 
*/

#ifndef FIND_HPP_
#define FIND_HPP_

    #include <algorithm>

    template<typename Object>
    typename Object::iterator do_find(Object & obj, int number)
    {
        return(std::find(obj.begin(), obj.end(), number));
    }

#endif
