/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:41:03 by mxu               #+#    #+#             */
/*   Updated: 2021/07/30 15:17:50 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>
#include <iostream>

class Weapon
{
    std::string _type;
public:
    Weapon();
    Weapon(const std::string &);
    ~Weapon();
    void setType(const std::string &);
    const std::string & getType();
};

#endif
