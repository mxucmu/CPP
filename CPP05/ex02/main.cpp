/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:07:43 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 22:22:14 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
        ShrubberyCreationForm f1("home");
        std::cout << f1 << std::endl;
        Bureaucrat  b5("Katie", 130);
        std::cout << b5 << std::endl;
        b5.signForm(&f1);
        b5.executeForm(f1);
        std::cout << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        RobotomyRequestForm f2("kiwi");
        std::cout << f2 << std::endl;
        Bureaucrat  b6("Elena", 30);
        std::cout << b6 << std::endl;
        b6.signForm(&f2);
        b6.executeForm(f2);
        std::cout << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        PresidentialPardonForm f3("Anna");
        std::cout << f3 << std::endl;
        Bureaucrat  b7("LadyBug", 5);
        std::cout << b7 << std::endl;
        b7.signForm(&f3);
        b7.executeForm(f3);
        std::cout << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
