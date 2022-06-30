/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 22:44:42 by mxu               #+#    #+#             */
/*   Updated: 2021/10/25 15:53:49 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

#include <iostream>

template <typename T>
void swap (T & n1, T & n2)
{
    T temp = n1;

    n1 = n2;
    n2 = temp;
}

template <typename T>
const T & min (const T & n1, const T & n2)
{
    return (n1 < n2) ? n1 : n2;
}

template <typename T>
const T & max (const T & n1, const T & n2)
{
    return (n1 > n2) ? n1 : n2;
}

class Awesome
{
    int _n;
public:
    Awesome(void) : _n(0) {}
    Awesome(int n) : _n(n) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this;}
    bool operator== (Awesome const & rhs) const { return (this->_n == rhs._n); }
    bool operator!= (Awesome const & rhs) const { return (this->_n != rhs._n); }
    bool operator> (Awesome const & rhs) const { return (this->_n > rhs._n); }
    bool operator< (Awesome const & rhs) const { return (this->_n < rhs._n); }
    bool operator>= (Awesome const & rhs) const { return (this->_n >= rhs._n); }
    bool operator<= (Awesome const & rhs) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
};

std::ostream & operator<< (std::ostream & o, const Awesome & a)
{
    o << a.get_n();
    return o;
}

#endif
