/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:39:54 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 22:46:02 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern & rhs) { (void)rhs; }

Intern & Intern::operator = (const Intern & rhs) 
{ 
    (void)rhs;
    return *this; 
}

Intern::~Intern() {}

Form*   Intern::makeShrubberyCreationForm(const std::string & target)
{
    std::cout << "Intern creates Shrubbery Creation Form." << std::endl;
    return (new ShrubberyCreationForm(target));
}

Form*   Intern::makeRobotomyRequestForm(const std::string & target)
{
    std::cout << "Intern creates Robotomy Request Form." << std::endl;
    return (new RobotomyRequestForm(target));
}

Form*   Intern::makePresidentialPardonForm(const std::string & target)
{
    std::cout << "Intern creates Presidential Pardon Form." << std::endl;
    return (new PresidentialPardonForm(target));
}

typedef Form*   (Intern::*Act)(const std::string &);

Form*   Intern::makeForm(const std::string & form, const std::string & target)
{
    std::string form_name[] = {"shrubbery creation", "robotomy request", 
        "presidential pardon"};
    Act         act[] = {&Intern::makeShrubberyCreationForm, 
        &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

    for (int i = 0; i < 3; i++)
        if (form == form_name[i])
            return( (this->*act[i])(target) );
    std::cout << "Error: intern did not find the correct form to generate." 
        << std::endl;        
    return nullptr;
}
