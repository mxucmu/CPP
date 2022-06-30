/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 18:36:57 by mxu               #+#    #+#             */
/*   Updated: 2021/10/01 19:20:15 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    FragTrap();
public:
    FragTrap(const std::string &);
    ~FragTrap();
    void    Attack(std::string const &);
    void    highFivesGuys();
};

#endif
