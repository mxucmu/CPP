/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:51:23 by mxu               #+#    #+#             */
/*   Updated: 2021/07/29 16:42:43 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <string>
#include <iostream>
#include <exception>
#include <new>

class Zombie
{
    std::string _name;
public:
    Zombie();
    Zombie(const std::string & name);
    ~Zombie();
    void announce();
};

Zombie* zombieHorde(int N, std::string);

#endif
