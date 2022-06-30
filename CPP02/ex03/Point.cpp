/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:44:12 by mxu               #+#    #+#             */
/*   Updated: 2021/09/06 17:43:41 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float const x_input, float const y_input) : x(x_input), y(y_input) {}

Point::Point(Point const & rhs)
{
    x = rhs.getx();
    y = rhs.gety();
}

Point::~Point() {}

Point & Point::operator = (Point const & rhs)
{
    if (this != &rhs)
    {
        x = rhs.getx();
        y = rhs.gety();
    }
    return *this;
}

void    Point::setx(Fixed x_input) { x = x_input;}

Fixed   Point::getx(void) const { return x; }

void    Point::sety(Fixed y_input) { y = y_input;}

Fixed   Point::gety(void) const { return y; }
