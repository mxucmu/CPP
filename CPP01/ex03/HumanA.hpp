/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:43:03 by mxu               #+#    #+#             */
/*   Updated: 2021/07/30 15:35:01 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

#include "Weapon.hpp"

class HumanA
{
    std::string _name;
    Weapon &    _weapon;
    HumanA();
public:
    HumanA(const std::string &, Weapon &);
    ~HumanA();
    void attack();
};

#endif
