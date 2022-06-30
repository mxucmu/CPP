/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:40:21 by mxu               #+#    #+#             */
/*   Updated: 2021/11/03 15:33:45 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _Capacity(N) {}

Span::Span(const Span & rhs)
{
    _Capacity = rhs.getCapacity();
    _vec = rhs.getVector();
}

Span & Span::operator= (const Span & rhs)
{
    if (this != &rhs)
    {
        _Capacity = rhs.getCapacity();
        _vec = rhs.getVector(); 
    }
    return *this;
}

Span::~Span() {}

void    Span::addNumber(int n)
{
    try
    {
        if (_vec.size() == _Capacity)
            throw std::exception();   
        else
            _vec.push_back(n);
    }
    catch(const std::exception& e)
    {
        std::cerr << "size overflow " << e.what() << std::endl;
    }
}

void    Span::setVector(const std::vector<int>::iterator & it1, 
            const std::vector<int>::iterator & it2, unsigned int n)
{
    try
    {
        if (n > _Capacity)
            throw std::exception();   
        else
            _vec.assign(it1, it2);
    }
    catch(const std::exception& e)
    {
        std::cerr << "size overflow " << e.what() << std::endl;
    }
}    

int     Span::getNumber(unsigned int i) const
{
    try
    {
        if (i > _vec.size() - 1)
            throw std::exception();
    }
    catch (const std::exception & e)
    {
        std::cerr << "size overflow " << e.what() << std::endl;
    }
    return _vec[i];
}

unsigned int        Span::getCapacity() const
{
    return _Capacity;
}

int     Span::getSize() const
{
    return (_vec.size());
}   
    
std::vector<int>    Span::getVector() const
{
    return (_vec);
}

int                 Span::shortestSpan() const
{
    try
    {
        if (_vec.size() < 2)
            throw std::exception();
        else
        {
            std::vector<int>    temp = _vec;
            std::sort(temp.begin(), temp.end());
            std::transform(temp.begin() + 1, temp.end(), temp.begin(), temp.begin(), std::minus<int>());
            std::sort(temp.begin(), temp.end() - 1);
            return temp[0];
        }
    }
    catch (const std::exception & e)
    {
        std::cerr << "ShortestSpan undefined for vector of size under 2: " << e.what() << std::endl;
    }
    return 0;
}

int                 Span::longestSpan() const
{
    try
    {
        if (_vec.size() < 2)
            throw std::exception();
        else
        {
            std::vector<int>    temp = _vec;
            std::sort(temp.begin(), temp.end());
            return temp[temp.size() - 1] - temp[0];
        }
    }
    catch (const std::exception & e)
    {
        std::cerr << "LongestSpan undefined for vector of size under 2: " << e.what() << std::endl;
    }
    return 0;
}
