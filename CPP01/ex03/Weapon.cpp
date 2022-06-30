/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:41:29 by mxu               #+#    #+#             */
/*   Updated: 2021/07/30 15:29:36 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("unknown") {}

Weapon::Weapon(const std::string & type) : _type(type) {}

Weapon::~Weapon() {}

void Weapon::setType(const std::string & type)
{
    _type = type;
}

const std::string & Weapon::getType()
{
    return ( _type);
}
