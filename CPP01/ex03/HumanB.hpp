/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:43:50 by mxu               #+#    #+#             */
/*   Updated: 2021/07/30 15:32:12 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
    std::string _name;
    Weapon *    _weapon;
public:
    HumanB();
    HumanB(const std::string &);
    ~HumanB();
    void setWeapon(Weapon *);
    void attack();
};

#endif
