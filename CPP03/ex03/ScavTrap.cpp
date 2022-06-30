/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:12:22 by mxu               #+#    #+#             */
/*   Updated: 2021/10/01 19:19:44 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "Constructor of ScavTrap called." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of ScavTrap called." << std::endl;
    std::cout << "Yoo hoooooooooo!" << std::endl;
    std::cout << "I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
    std::cout << "What? I am not a robot?" << std::endl;
}

void    ScavTrap::Attack(std::string const & target)
{
    std::cout<< "ScavTrap " << this->get_name() << " attack " << target << ", causing " 
        << this->get_attack_damage() << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->get_name() << " has entered in Gate keeper mode." << std::endl;
}
