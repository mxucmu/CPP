/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:43:17 by mxu               #+#    #+#             */
/*   Updated: 2021/07/30 15:30:29 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
    
HumanA::HumanA(const std::string & name, Weapon & weapon) : 
    _name(name), _weapon(weapon) {}
    
HumanA::~HumanA() {}

void    HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
