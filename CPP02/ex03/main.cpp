/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:06:32 by mxu               #+#    #+#             */
/*   Updated: 2021/09/23 13:56:06 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point   a(1.0f, 1.0f);
    Point   b(5.0f, 1.0f);
    Point   c(3.0f, 3.0f);
    Point   point(2.1f, 2.0f);

    if (bsp(a, b, c, point))
        std::cout << "The point is inside the triangle abc." << std::endl;
    else
        std::cout << "The point is outside the triangle abc." << std::endl;

    return 0;
}
