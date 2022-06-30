/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:44:57 by mxu               #+#    #+#             */
/*   Updated: 2021/07/30 15:32:54 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : _name("unknown"), _weapon(nullptr) {}

HumanB::HumanB(const std::string & name) : _name(name), _weapon(nullptr) {}
     
HumanB::~HumanB() {}

void    HumanB::setWeapon(Weapon * weapon)
{
    _weapon = weapon;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
