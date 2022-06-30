/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinearAlgebra.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:56:55 by mxu               #+#    #+#             */
/*   Updated: 2021/09/06 18:19:49 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinearAlgebra.hpp"

Point   v_sum(Point v1, Point v2)
{
    Point   temp;

    temp.setx(v1.getx() + v2.getx());
    temp.sety(v1.gety() + v2.gety());
    return temp;
}

Point   v_scala(Point v1, Fixed c)
{
    Point   temp;

    temp.setx(v1.getx() * c);
    temp.sety(v1.gety() * c);
    return temp;
}

Point   v_sub(Point v1, Point v2)
{
    return v_sum(v1, v_scala(v2, Fixed(-1.f)));
}

Fixed   dot_prod(Point v1, Point v2)
{
    return v1.getx() * v2.getx() + v1.gety() * v2.gety();
}

Fixed   v_norm_squared(Point v1)
{
    return dot_prod(v1, v1);
}

Point   v_proj(Point v1, Point v2)
{
    return (v_scala(v2, dot_prod(v1, v2) / v_norm_squared(v2)));
}
