/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:24:23 by mxu               #+#    #+#             */
/*   Updated: 2021/10/14 14:46:31 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name)
{
    if (grade < 1)
        throw BureaucratExceptionHigh;
    else if (grade > 150)
        throw BureaucratExceptionLow;
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs) : _name(rhs.getName()), 
    _grade(rhs.getGrade()) {}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat & rhs)
{
    if (this != &rhs)
        _grade = rhs.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string & Bureaucrat::getName() const { return _name; }

int                 Bureaucrat::getGrade() const { return _grade; }

void                Bureaucrat::incrementGrade()
{
    if (_grade < 2)
        throw BureaucratExceptionHigh;
    else
        _grade--;
}

void                Bureaucrat::decrementGrade()
{
    if (_grade > 149)
        throw BureaucratExceptionLow;
    else
        _grade++;
}

void                Bureaucrat::signForm(Form* f)
{
    try
    {
        f->beSigned(*this);
        std::cout << _name << " signs " << f->getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << _name << " cannot sign " << f->getName() << " because " 
            << e.what() << std::endl;
    }
    
}

std::ostream & operator << (std::ostream & o, const Bureaucrat & b)
{
    return o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
}
