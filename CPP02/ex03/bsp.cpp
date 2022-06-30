/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:43:33 by mxu               #+#    #+#             */
/*   Updated: 2021/09/23 13:56:28 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "LinearAlgebra.hpp"

bool     same_side(Point const p1, Point const p2, Point const p3, Point const p)
{
    Point   v2, v3, vp;
    Point   proj1, proj2;

    v2 = v_sub(p2, p1);
    v3 = v_sub(p3, p1);
    vp = v_sub(p, p1);
    proj1 = v_proj(v3, v2);
    proj2 = v_proj(vp, v2);
    return (dot_prod(v_sub(v3, proj1), v_sub(vp, proj2)) > 0);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    if (!same_side(a, b, c, point))
        return false;
    if (!same_side(b, c, a, point))
        return false;
    if (!same_side(c, a, b, point))
        return false;
    return true;
}
