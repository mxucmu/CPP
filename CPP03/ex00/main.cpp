/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:08:42 by mxu               #+#    #+#             */
/*   Updated: 2021/09/24 18:22:32 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    int hit;
    int repair;
    ClapTrap ft("Pop");

    ft.Attack("Frigid");
    std::cout << "The hit points are " << ft.get_hit_points() << std::endl;
    hit = 5;
    ft.takeDamage(hit);
    std::cout << "The hit points after takeDamage " << hit << " points are " << ft.get_hit_points() << std::endl;
    repair = 10;
    ft.beRepaired(repair);
    std::cout << "The hit points after beRepaired " << repair << " are " << ft.get_hit_points() << std::endl;
    std::cout << "The energy points are " << ft.get_energy_points() << std::endl;
}
