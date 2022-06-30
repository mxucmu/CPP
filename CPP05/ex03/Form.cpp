/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:54:02 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 17:39:45 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string & name, int gradeSign, int gradeExecute) :
    _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    if (gradeSign < 1 || gradeExecute < 1)
        throw FormExceptionHigh;
    if (gradeSign > 150 || gradeExecute > 150)
        throw FormExceptionLow;
}

Form::Form(const Form & rhs) : _name(rhs.getName()), _signed(rhs.getSigned()), 
    _gradeSign(rhs.getGradeSign()), _gradeExecute(rhs.getGradeExecute()) {}

Form & Form::operator = (const Form & rhs)
{
    if (this != &rhs)
        _signed = rhs.getSigned();
    return *this;
}

Form::~Form() {}

const std::string & Form::getName() const { return _name; }

bool                Form::getSigned() const { return _signed; }

const int &         Form::getGradeSign() const { return _gradeSign; }

const int &         Form::getGradeExecute() const { return _gradeExecute; }

void                Form::beSigned(const Bureaucrat & person)
{
    if (person.getGrade() <= _gradeSign)
        _signed = true;
    else
        throw FormExceptionLow;
}

void                Form::execute(const Bureaucrat & person) const
{
    if (person.getGrade() <= _gradeExecute && this->_signed)
        this->action();
    else if (!this->_signed)
        throw FormNotSigned;
    else
        throw BureaucratExceptionLow;
}

std::ostream & operator << (std::ostream & o, const Form & form)
{
    return o << "Form name: " << form.getName() << std::endl
        << "Signed: " << form.getSigned() << std::endl
        << "Grade required to sign: " << form.getGradeSign() << std::endl
        << "Grade required to execute: " << form.getGradeExecute() << std::endl;
}
