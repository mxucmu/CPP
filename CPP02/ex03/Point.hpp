/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:08:57 by mxu               #+#    #+#             */
/*   Updated: 2021/09/23 13:46:45 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
#define _POINT_HPP_

#include "Fixed.hpp"

#include <cmath>

class Point
{
    Fixed x;
    Fixed y;
public:
    Point();
    Point(float const, float const);
    Point(Point const &);
    ~Point();
    Point & operator = (Point const &);
    void    setx(Fixed);
    Fixed   getx(void) const;
    void    sety(Fixed);
    Fixed   gety(void) const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif
