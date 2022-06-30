/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:00:32 by mxu               #+#    #+#             */
/*   Updated: 2021/08/31 18:26:41 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int & value) 
{
    std::cout << "Int constructor called" << std::endl;
    _value = value << _fracbits;
}

Fixed::Fixed(const float & value) 
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _fracbits));
}

Fixed::Fixed(const Fixed & rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = rhs._value;
}

Fixed & Fixed::operator = (const Fixed & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        _value = rhs._value;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void    Fixed::setRawBits(int const raw)
{
    _value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
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

std::ostream & operator << (std::ostream & o, const Fixed & f)
{    
    return o << f.toFloat();
}
