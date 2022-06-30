/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:07:43 by mxu               #+#    #+#             */
/*   Updated: 2021/10/13 16:51:09 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        Bureaucrat  b1("Bob", 2);
        std::cout << b1 << std::endl;
        b1.decrementGrade();
        std::cout << "Decrement grade." << std::endl;
        std::cout << b1 << std::endl;
        std::cout << "Increment grade." << std::endl;
        b1.incrementGrade();  
        std::cout << b1 << std::endl;
        std::cout << "Increment grade." << std::endl;
        b1.incrementGrade();   
        std::cout << b1 << std::endl;
        std::cout << "Increment grade." << std::endl;
        b1.incrementGrade();  
        std::cout << b1 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try 
    {
        Bureaucrat  b4("Katty", 149);
        std::cout << b4 << std::endl;
        b4.incrementGrade();
        std::cout << "Increment grade." << std::endl;
        std::cout << b4 << std::endl;
        std::cout << "Decrement grade." << std::endl;
        b4.decrementGrade();  
        std::cout << b4 << std::endl;
        std::cout << "Decrement grade." << std::endl;
        b4.decrementGrade();   
        std::cout << b4 << std::endl;
        std::cout << "Decrement grade." << std::endl;
        b4.decrementGrade();  
        std::cout << b4 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try 
    {
        Bureaucrat  b2("Michael", 0);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try 
    {
        Bureaucrat  b3("Heather", 151);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}
