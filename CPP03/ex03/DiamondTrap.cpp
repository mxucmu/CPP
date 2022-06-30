/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 23:40:47 by mxu               #+#    #+#             */
/*   Updated: 2021/10/01 19:45:38 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string & name) : 
    ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(name), ScavTrap(name)
{
    _name = name;
    std::cout << "Constructor of DiamondTrap called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor of DiamondTrap called." << std::endl;
}

void    DiamondTrap::Attack(std::string const & target)
{
    std::cout<< "DiamondTrap " << _name << " attacks " << target 
    << " causing " << ScavTrap::get_attack_damage() << " points of damage!" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << _name << ", my ClapTrap name is "
        << this->get_name() << "." << std::endl; 
}
