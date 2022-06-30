/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:10:04 by mxu               #+#    #+#             */
/*   Updated: 2021/05/20 20:33:30 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class Fixed
{
    int                 _value;
    const static int    _fracbits = 8;
public:
    Fixed();
    Fixed(const Fixed &);
    Fixed & operator = (const Fixed &);
    ~Fixed();
    void    setRawBits(int const raw);
    int     getRawBits(void) const;
};

#endif
