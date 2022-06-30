/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:42:54 by mxu               #+#    #+#             */
/*   Updated: 2021/08/06 13:17:29 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *zh = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        Zombie temp(name);
        zh[i] = temp;
    }
    return (zh);
}
