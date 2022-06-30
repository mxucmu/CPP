/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:10:04 by mxu               #+#    #+#             */
/*   Updated: 2021/08/31 18:21:48 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed
{
    int                 _value;
    const static int    _fracbits = 8;
public:
    Fixed();
    Fixed(const int &);
    Fixed(const float &);
    Fixed(const Fixed &);
    Fixed & operator = (const Fixed &);
    ~Fixed();
    void    setRawBits(int const);
    int     getRawBits(void) const;
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream & operator << (std::ostream &, const Fixed &);

#endif
