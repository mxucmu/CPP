/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:07:43 by mxu               #+#    #+#             */
/*   Updated: 2021/10/14 15:02:46 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
    try
    {
        Form f1("Check-in", 20, 50);
        std::cout << f1 << std::endl;
        Bureaucrat  b5("Katie", 30);
        std::cout << b5 << std::endl;
        b5.signForm(&f1);
        std::cout << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form f2("Check-out", 20, 50);
        std::cout << f2 << std::endl;
        Bureaucrat  b6("Elena", 10);
        std::cout << b6 << std::endl;
        b6.signForm(&f2);
        std::cout << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
