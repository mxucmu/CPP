/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 18:37:23 by mxu               #+#    #+#             */
/*   Updated: 2021/10/01 18:49:47 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string & name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "Constructor of FragTrap called." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of FragTrap called." << std::endl;
    std::cout << "Hey, check me out everybody! I'm dancin', I'm dancin'!" << std::endl;
    std::cout << "Wow! You're not dead?" << std::endl;
}

void    FragTrap::Attack(std::string const & target)
{
    std::cout<< "FragTrap " << this->get_name() << " attack " << target << ", causing " 
        << this->get_attack_damage() << " points of damage!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->get_name() << " requests a positive high fives guys!" << std::endl;
}
