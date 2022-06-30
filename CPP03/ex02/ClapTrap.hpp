/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:29:32 by mxu               #+#    #+#             */
/*   Updated: 2021/10/01 17:53:12 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <string>
#include <iostream>

class ClapTrap
{
    std::string         _name;
    unsigned int        _hit_points;
    unsigned int        _energy_points;
    unsigned int        _attack_damage;
    ClapTrap();  
public:
    ClapTrap(const std::string &, const unsigned int, const unsigned int, 
        const unsigned int);
    ClapTrap(const ClapTrap &);
    ClapTrap &  operator = (const ClapTrap &);
    ~ClapTrap();
    const std::string & get_name() const;
    unsigned int        get_hit_points() const;
    unsigned int        get_energy_points() const;
    unsigned int        get_attack_damage() const;
    void                Attack(std::string const & target);
    void                takeDamage(unsigned int amount);
    void                beRepaired(unsigned int amount);
};

#endif
