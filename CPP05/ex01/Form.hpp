/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:03:35 by mxu               #+#    #+#             */
/*   Updated: 2021/10/14 14:46:55 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_ 
#define FORM_HPP_

#include "MyException.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    const std::string   _name;
    bool                _signed;
    const int           _gradeSign;
    const int           _gradeExecute;
    Form();
public:
    Form(const std::string &, int, int);
    Form(const Form &);
    Form & operator = (const Form &);
    ~Form();
    const std::string & getName() const;
    bool                getSigned() const;
    const int &         getGradeSign() const;
    const int &         getGradeExecute() const;
    void                beSigned(const Bureaucrat &);
};

std::ostream & operator << (std::ostream &, const Form &);

const MyException FormExceptionHigh("Form::GradeTooHighException");
const MyException FormExceptionLow("Form::GradeTooLowException");

#endif
