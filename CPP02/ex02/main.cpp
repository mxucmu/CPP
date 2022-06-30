/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:21:20 by mxu               #+#    #+#             */
/*   Updated: 2021/09/23 14:13:37 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed       a(0);
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    
    std::cout << Fixed::max(a, b) << std::endl;

    Fixed       c(2.f);
    Fixed       d(Fixed(5.05f) * Fixed(2));
    
    
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    Fixed e;
    e = d / c;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;    

    return 0;
}
