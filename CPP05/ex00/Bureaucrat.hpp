/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:18:42 by mxu               #+#    #+#             */
/*   Updated: 2021/10/14 12:57:28 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include "MyException.hpp"
#include <iostream>
#include <string>

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
};

std::ostream & operator << (std::ostream &, const Bureaucrat &);

const MyException exceptionHigh("Bureaucrat::GradeTooHighException");
const MyException exceptionLow("Bureaucrat::GradeTooLowException");

#endif
