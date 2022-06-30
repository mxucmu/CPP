/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:24:23 by mxu               #+#    #+#             */
/*   Updated: 2021/10/14 13:05:48 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw exceptionHigh;
    if (grade > 150)
        throw exceptionLow;
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
        throw exceptionHigh;
    else
        _grade--;
}

void                Bureaucrat::decrementGrade()
{
    if (_grade > 149)
        throw exceptionLow;
    else
        _grade++;
}

std::ostream & operator << (std::ostream & o, const Bureaucrat & b)
{
    return o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
}
