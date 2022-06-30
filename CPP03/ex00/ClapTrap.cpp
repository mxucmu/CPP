/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:29:28 by mxu               #+#    #+#             */
/*   Updated: 2021/09/24 18:18:39 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string & name) : _name(name), _hit_points(10), 
    _energy_points(10), _attack_damage(0) 
{
    std::cout << "Constructor of ClapTrap called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & rhs)
{
    _name = rhs.get_name();
    _hit_points = rhs.get_hit_points();
    _energy_points = rhs.get_energy_points();
    _attack_damage = rhs.get_attack_damage();
}

ClapTrap &  ClapTrap::operator = (const ClapTrap & rhs)
{
    if (this != &rhs)
    {
        _name = rhs.get_name();
        _hit_points = rhs.get_hit_points();
        _energy_points = rhs.get_energy_points();
        _attack_damage = rhs.get_attack_damage();
    }
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "Destructor of ClapTrap called." << std::endl;
}

const std::string & ClapTrap::get_name() const {return _name;}

unsigned int        ClapTrap::get_hit_points() const {return _hit_points;}

unsigned int        ClapTrap::get_energy_points() const {return _energy_points;}

unsigned int        ClapTrap::get_attack_damage() const {return _attack_damage;}

void    ClapTrap::Attack(std::string const & target)
{
    std::cout<< "ClapTrap " << _name << " attack " << target << ", causing " 
        << _attack_damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points < amount)
        _hit_points = 0;
    else    
        _hit_points -= amount; 
}

void    ClapTrap::beRepaired(unsigned int amount)
{   
    _hit_points += amount; 
}
