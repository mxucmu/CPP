/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 22:42:28 by mxu               #+#    #+#             */
/*   Updated: 2021/10/26 14:30:19 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <string>

int main(void)
{
    int a = 2;
    int b = 3;

    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    Awesome e(2), f(4);
    swap(e, f);
    std::cout << "e = " << e << " " << "f = " << f << std::endl;
    std::cout << "min( a, b ) = " << min(e, f) << std::endl;
    std::cout << "max( a, b ) = " << max(e, f) << std::endl;
    
    return 0;
}
