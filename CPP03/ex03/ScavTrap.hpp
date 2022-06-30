/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:10:22 by mxu               #+#    #+#             */
/*   Updated: 2021/10/01 19:19:42 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    ScavTrap();
public:
    ScavTrap(const std::string &);
    ~ScavTrap();
    void    Attack(std::string const &);
    void    guardGate();
};

#endif
