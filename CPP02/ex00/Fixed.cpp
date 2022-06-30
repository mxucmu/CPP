/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:00:32 by mxu               #+#    #+#             */
/*   Updated: 2021/05/20 20:33:44 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = rhs.getRawBits();
}

Fixed & Fixed::operator = (const Fixed & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        _value = rhs.getRawBits();
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
