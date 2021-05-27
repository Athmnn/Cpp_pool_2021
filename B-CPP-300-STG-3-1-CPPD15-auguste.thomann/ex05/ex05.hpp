/*
** EPITECH PROJECT, 2020
** ex05.hpp
** File description:
** ex05 file
*/

#ifndef EX05_HPP_
#define EX05_HPP_

#include <iostream>

template <typename Template>
class array
{
public:
    array(void) : _n(0), _tab(NULL){};
    array(unsigned int n) : _n(n), _tab(new Template[_n]){};
    array(const array<Template> &copy) : _n(copy._n), _tab(new Template[_n])
    {
        for (unsigned int i = 0; i < this->_n; i++)
            this->_tab[i] = copy._tab[i];
    };
    ~array(void)
    {
        if (this->_tab)
            delete[] this->_tab;
    };
    const unsigned int size(void) const { return (this->_n); };
    array<Template> &operator=(const array<Template> &obj)
    {
        this->_n = obj._n;
        if (this->_tab)
            delete[] this->_tab;
        this->_tab = new Template[_n];
        for (unsigned int i = 0; i < obj._n; i++)
            this->_tab[i] = obj._tab[i];
        return *this;
    };
    template <typename Number>
    array<Number> convertTo(Number (*convert)(const Template &)) const
    {
        array<Number> tmp(_n);
        for (unsigned int i = 0; i < this->_n; i++)
            tmp[i] = (*convert)(_tab[i]);
        return tmp;
    };
    
    void dump() const
    {
        std::cout << "[";
        for (unsigned int i = 0; i < this->_n; i++)
        {
            std::cout << this->_tab[i];
            if (i < this->_n - 1)
                std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    };

    Template &operator[](unsigned int const index) const
    {
        if (index >= _n)
            throw(std::exception());
        return _tab[index];
    };
    Template &operator[](unsigned int const index)
    {
        if (index >= _n)
        {
            Template *copy = new Template[index + 1]();
            for (unsigned int i = 0; i < _n; i++)
                copy[i] = _tab[i];
            delete[] _tab;
            _tab = copy;
            _n = index + 1;
        }
        return _tab[index];
    };

protected:
    unsigned int _n;
    Template *_tab;
};

#endif