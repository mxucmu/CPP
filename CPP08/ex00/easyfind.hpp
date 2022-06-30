/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:51:58 by mxu               #+#    #+#             */
/*   Updated: 2021/10/31 05:54:29 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_

#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>

template <typename T>
void    easyfind(T & cont, int n)
{
    typename T::iterator    pos;
    int                     index = 0;

    try
    {    
        pos = std::find(cont.begin(), cont.end(), n);
        if (pos == cont.end())
            throw std::exception();
        else
        {
            for (typename T::iterator it = cont.begin(); it != pos; it++)
                index++;
            std::cout << "Element " << n << " is found at index i = " <<  index << std::endl;
        }   
    }
    catch(const std::exception & e)
    {
        std::cerr << "No such element (" << n << ") found (" << e.what() << ")" << std::endl;
    }     
}

template <typename T>
void    disp_v(T & cont)
{
    if (cont.empty()) 
        return;
    for (typename T::iterator it = cont.begin(); it != cont.end(); it++)
    {
        std::cout << *it << " ";
    }
        std::cout << std::endl;
}

#endif
