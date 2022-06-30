/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:55:09 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 18:49:34 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

class Intern
{
    Form*   makeShrubberyCreationForm(const std::string &);
    Form*   makeRobotomyRequestForm(const std::string &);
    Form*   makePresidentialPardonForm(const std::string &);
public:
    Intern();
    Intern(const Intern &);
    Intern & operator = (const Intern &);
    ~Intern();
    Form*   makeForm(const std::string &, const std::string &);
};

#endif
