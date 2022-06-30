/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:41:20 by mxu               #+#    #+#             */
/*   Updated: 2021/07/29 16:41:30 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("unknown") {}

Zombie::Zombie(const std::string & name) : _name(name) {}

Zombie::~Zombie() 
{
    std::cout << "destructor function called for: " << _name << std::endl;
}

void Zombie::announce()
{    
    std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
