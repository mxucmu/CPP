/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:54:10 by mxu               #+#    #+#             */
/*   Updated: 2021/11/03 15:28:56 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"
#include <list>

int main()
{
    MutantStack<int>    mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << mstack.top() << std::endl;
    std::cout << mstack.size() << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "Compare -----------" << std::endl;
    
    std::list<int>    l;

    l.push_back(5);
    l.push_back(17);

    std::cout << l.back() << std::endl;

    l.pop_back();

    std::cout << l.size() << std::endl;

    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    l.push_back(0);
    std::cout << l.back() << std::endl;
    std::cout << l.size() << std::endl;

    std::list<int>::iterator lit = l.begin();
    std::list<int>::iterator lite = l.end();

    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }
   
}
