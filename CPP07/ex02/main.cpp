/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:05:41 by mxu               #+#    #+#             */
/*   Updated: 2021/10/26 15:47:06 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int, 0>  ept;

    std::cout << "Size of array a is " << ept.size() << std::endl;
    
    Array<int, 5>  a;

    std::cout << "Size of array a is " << a.size() << std::endl;

    for (int i = 0; i < a.size(); i++)
        a[i] = i * 2;
    std::cout << "Assigning an sequence of even numbers to a: " << std::endl;
    std::cout << a << std::endl;

    int i = 2;
    std::cout << "a [" << i << "] = " << a[i] << std::endl;
    i = 5;
    std::cout << "a [" << i << "] = " << a[i] << std::endl;
    
    Array<int, 5> b;
    b = a;
    std::cout << "Assigning b = a : " << std::endl;
    std::cout << b << std::endl;

    Array<int, 5> c(a);
    std::cout << "Copy constructor c(a) : " << std::endl;
    std::cout << c << std::endl;
}
