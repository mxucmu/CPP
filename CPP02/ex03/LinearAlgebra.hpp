/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinearAlgebra.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:16:50 by mxu               #+#    #+#             */
/*   Updated: 2021/09/06 18:19:58 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LINEARALGEBRA_HPP_
#define _LINEARALGEBRA_HPP_

#include "Fixed.hpp"
#include "Point.hpp"

Point   v_sum(Point v1, Point v2);
Point   v_scala(Point v1, Fixed c);
Point   v_sub(Point v1, Point v2);
Fixed   dot_prod(Point v1, Point v2);
Fixed   v_norm_squared(Point v1);
Point   v_proj(Point v1, Point v2);

#endif
