/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:10:04 by mxu               #+#    #+#             */
/*   Updated: 2021/09/06 15:34:54 by mxu              ###   ########.fr       */
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
    void    setRawBits(const int);
    int     getRawBits(void) const;
    float   toFloat(void) const;
    int     toInt(void) const;
    bool    operator > (const Fixed &);
    bool    operator < (const Fixed &);
    bool    operator >= (const Fixed &);
    bool    operator <= (const Fixed &);
    bool    operator == (const Fixed &);
    bool    operator != (const Fixed &);
    Fixed   operator + (const Fixed &);
    Fixed   operator - (const Fixed &);
    Fixed   operator * (const Fixed &);
    Fixed   operator / (const Fixed &);
    Fixed & operator ++ ();
    Fixed   operator ++ (int);
    Fixed & operator -- ();
    Fixed   operator -- (int);
    static Fixed & max(Fixed &, Fixed &);
    static Fixed & min(Fixed &, Fixed &);
    static Fixed const & max(const Fixed &, const Fixed &);
    static Fixed const & min(const Fixed &, const Fixed &);
};

std::ostream & operator << (std::ostream & o, const Fixed & f);

#endif
