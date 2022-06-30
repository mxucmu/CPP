/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:31:21 by mxu               #+#    #+#             */
/*   Updated: 2021/07/29 17:01:59 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie      *z1;
    
    z1 = newZombie("Coder");
    (*z1).announce();
    delete z1;
    randomChump("Chemical");
    return 0;
}