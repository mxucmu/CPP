/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:40:46 by mxu               #+#    #+#             */
/*   Updated: 2021/10/20 13:06:05 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

int main()
{
    Data    tmp;

    std::cout << &tmp << std::endl;
    std::cout << deserialize(serialize(&tmp)) << std::endl;

    std::cout << serialize(&tmp) << std::endl;
}
