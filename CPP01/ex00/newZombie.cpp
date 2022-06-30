/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:09:51 by mxu               #+#    #+#             */
/*   Updated: 2021/07/29 15:41:21 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{    
    try
    {
        Zombie *z = new Zombie(name);
        return z;
    } catch (std::bad_alloc & ba)
    {
        std::cout << "Memory allocation for zombie " + name + "failed." \
            << ba.what() << std::endl;
        return nullptr;
    }
}
