/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:00:32 by mxu               #+#    #+#             */
/*   Updated: 2021/09/06 16:42:34 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const int & value) 
{
    _value = value << _fracbits;
}

Fixed::Fixed(const float & value) 
{
    _value = roundf(value * (1 << _fracbits));
}

Fixed::Fixed(const Fixed & rhs)
{
    _value = rhs._value;
}

Fixed & Fixed::operator = (const Fixed & rhs)
{
    if (this != &rhs)
        _value = rhs._value;
    return *this;
}

Fixed::~Fixed() {}

void    Fixed::setRawBits(int const raw)
{
    _value = raw;
}

int     Fixed::getRawBits(void) const
{
    return _value;
} 

float   Fixed::toFloat(void) const
{
    return (float)_value / (1 << _fracbits);
}
    
int     Fixed::toInt(void) const
{
    return _value >> _fracbits;
}

bool Fixed::operator > (const Fixed & rhs)
{
    return _value > rhs.getRawBits();
}

bool Fixed::operator < (const Fixed & rhs)
{
    return _value < rhs.getRawBits();
}

bool Fixed::operator >= (const Fixed & rhs)
{
    return _value >= rhs.getRawBits();
}

bool Fixed::operator <= (const Fixed & rhs)
{
    return _value <= rhs.getRawBits();
}

bool Fixed::operator == (const Fixed & rhs)
{
    return _value == rhs.getRawBits();
}

bool Fixed::operator != (const Fixed & rhs)
{
    return _value != rhs.getRawBits();
}

Fixed  Fixed::operator + (const Fixed & rhs)
{
    Fixed   temp = *this;
    temp._value += rhs.getRawBits();
    return temp;
}

Fixed  Fixed::operator - (const Fixed & rhs)
{
    Fixed   temp = *this;
    temp._value -= rhs.getRawBits();
    return temp;
}

Fixed  Fixed::operator * (const Fixed & rhs)
{
    Fixed   temp = *this;
    temp._value = (temp._value * rhs.getRawBits()) >> _fracbits;
    return temp;
}


Fixed  Fixed::operator / (const Fixed & rhs)
{
    Fixed   temp = *this;
    temp._value = temp._value * (1 << _fracbits) / rhs.getRawBits(); 
    return temp;
}

Fixed & Fixed::operator ++ ()
{
    _value +=1;
    return *this;
}

Fixed   Fixed::operator ++ (int)
{
    Fixed   temp = *this;
    _value += 1;
    return temp;
}

Fixed & Fixed::operator -- ()
{
    _value -=1;
    return *this;
}

Fixed    Fixed::operator -- (int)
{
    Fixed   temp = *this;
    _value -= 1;
    return temp;
}

Fixed & Fixed::max(Fixed & lhs, Fixed & rhs)
{
    return (lhs.getRawBits() > rhs.getRawBits()) ? lhs : rhs;
}

Fixed & Fixed::min(Fixed & lhs, Fixed & rhs)
{
    return (lhs.getRawBits() < rhs.getRawBits()) ? lhs : rhs;
}

Fixed const & Fixed::max(const Fixed & lhs, const Fixed & rhs)
{
    return (lhs.getRawBits() > rhs.getRawBits()) ? lhs : rhs;
}

Fixed const & Fixed::min(const Fixed & lhs, const Fixed & rhs)
{
    return (lhs.getRawBits() < rhs.getRawBits()) ? lhs : rhs;
}

std::ostream & operator << (std::ostream & o, const Fixed & f)
{    
    return o << f.toFloat();
}
