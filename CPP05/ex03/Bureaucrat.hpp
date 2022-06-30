/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:18:42 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 14:37:16 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include "MyException.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
    const std::string   _name;
    int                 _grade;
    Bureaucrat();
public:
    Bureaucrat(const std::string &, int);
    Bureaucrat(const Bureaucrat &);
    Bureaucrat & operator = (const Bureaucrat &);
    ~Bureaucrat();
    const std::string & getName() const;
    int                 getGrade() const;
    void                incrementGrade();
    void                decrementGrade();
    void                signForm(Form*);
    void                executeForm(const Form &);
};

std::ostream & operator << (std::ostream &, const Bureaucrat &);

const MyException BureaucratExceptionHigh("Bureaucrat::GradeTooHighException");
const MyException BureaucratExceptionLow("Bureaucrat::GradeTooLowException");

#endif
