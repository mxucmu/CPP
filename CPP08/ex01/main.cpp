/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 21:40:41 by mxu               #+#    #+#             */
/*   Updated: 2021/11/03 15:36:29 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <iostream>
#include <ctime>        
#include <cstdlib>      

int RandomNumber () 
{ 
    return(std::rand()%10000000000); 
}

int main()
{
    Span    sp = Span(5);

    sp.addNumber(4);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "shortest Span = " << sp.shortestSpan() << std::endl;
    std::cout << "longest Span = " << sp.longestSpan() << std::endl;
    
    std::vector<int>    v(1000000);
    
    std::srand(std::time(0));
    std::srand(std::time(0));
    std::generate (v.begin(), v.end(), RandomNumber);
    std::cout << "The first 5 numbers are: " << std::endl;
    for (size_t i = 0; i < 5; i++)
        std::cout << "v[" << i << "] = "<< v[i] << " ";
    std::cout << std::endl;
    std::sort(v.begin(), v.end());
    std::cout << "The smallest number is: " << v[0]<< std::endl;
    std::cout << "The largest number is: " << v[v.size() - 1]<< std::endl;

    Span    sp1 = Span(1000000);
    sp1.setVector(v.begin(), v.end(), 1000000);
    
    std::cout << "longest Span = " << sp1.longestSpan() << std::endl;
    std::cout << "shortest Span = " << sp1.shortestSpan() << std::endl;
}
