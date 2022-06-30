/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:37:00 by mxu               #+#    #+#             */
/*   Updated: 2021/10/26 14:36:44 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
#define _ITER_HPP_

#include <iostream>

template <typename T>
void    iter(T * ptr, size_t n, void (*func)(T const &))
{
    for (size_t i = 0; i < n; i++)
        func(*(ptr + i));
}

template <typename T>
void    iter(T * ptr, size_t n, void (*func)(T &))
{
    for (size_t i = 0; i < n; i++)
        func(*(ptr + i));
}

template <typename T>
void    print(T const & x)
{
    std::cout << x << std::endl;
    return;
}

class Awesome
{
    int _n;
public:
Awesome(void) : _n(42) { return; }
int get(void) const { return this->_n; }
};

std::ostream & operator<< (std::ostream & o, Awesome const & rhs)
{
    o << rhs.get();
    return o;
}

#endif
