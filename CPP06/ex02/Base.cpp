/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:22:57 by mxu               #+#    #+#             */
/*   Updated: 2021/10/20 14:41:59 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *  generate(void)
{
    int     temp;
    Base*   ret;

    srand(time(NULL)); srand(time(NULL)); 
    temp = rand() % 3;
    switch (temp)
    {
        case 0: ret = new A(); break;
        case 1: ret = new B(); break;
        case 2: ret = new C(); break;
    }
    return ret;
}

void    identify(Base* p)
{
    A*  caseA = dynamic_cast<A*> (p);
    B*  caseB = dynamic_cast<B*> (p);
    C*  caseC = dynamic_cast<C*> (p);

    if (caseA)
        std::cout << "A" << std::endl;
    else if (caseB)
        std::cout << "B" << std::endl;
    else if (caseC)
        std::cout << "C" << std::endl;
    else
        std::cout << "unidentified type" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A& caseA = dynamic_cast<A&> (p); (void) caseA;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e0)
    {
        try
        {
            B& caseB = dynamic_cast<B&> (p); (void) caseB;
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e1)
        {
            try
            {
                C& caseC = dynamic_cast<C&> (p); (void) caseC;
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e2)
            {
                std::cout << "unidentified type" << std::endl;
            }
        }
    }
}
