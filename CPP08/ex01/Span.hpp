/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:52:01 by mxu               #+#    #+#             */
/*   Updated: 2021/11/03 13:55:31 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <vector>
#include <exception>
#include <iostream>
#include <functional>
#include <algorithm>

class Span
{
    unsigned int        _Capacity;
    std::vector<int>    _vec;
    Span();
public:
    Span(unsigned int);
    Span(const Span &);
    Span &  operator= (const Span &);
    ~Span();
    void                addNumber(int);
    void                setVector(const std::vector<int>::iterator &, const 
                            std::vector<int>::iterator &, unsigned int n);
    int                 getNumber(unsigned int) const;
    unsigned int        getCapacity() const;
    int                 getSize() const;
    std::vector<int>    getVector() const;
    int                 shortestSpan() const;
    int                 longestSpan() const;
};

#endif
