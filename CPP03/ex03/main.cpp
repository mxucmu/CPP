/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:08:42 by mxu               #+#    #+#             */
/*   Updated: 2021/10/01 19:45:12 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    int         hit;
    int         repair;
    ScavTrap    st("Tat");
    FragTrap    ft("Pop");
    DiamondTrap dt("Hammer");

    st.Attack("Zinger");
    std::cout << "The hit points are " << st.get_hit_points() << std::endl;
    hit = 5;
    st.takeDamage(hit);
    std::cout << "The hit points after takeDamage " << hit << " points are " << st.get_hit_points() << std::endl;
    repair = 10;
    st.beRepaired(repair);
    std::cout << "The hit points after beRepaired " << repair << " are " << st.get_hit_points() << std::endl;
    std::cout << "The energy points are " << st.get_energy_points() << std::endl;
    st.guardGate();
    std::cout << std::endl;

    ft.Attack("Frigid");
    std::cout << "The hit points are " << ft.get_hit_points() << std::endl;
    hit = 15;
    ft.takeDamage(hit);
    std::cout << "The hit points after takeDamage " << hit << " points are " << ft.get_hit_points() << std::endl;
    repair = 20;
    ft.beRepaired(repair);
    std::cout << "The hit points after beRepaired " << repair << " are " << ft.get_hit_points() << std::endl;
    std::cout << "The energy points are " << ft.get_energy_points() << std::endl;
    ft.highFivesGuys();
    std::cout << std::endl;

    dt.Attack("Hattori");
    std::cout << "The hit points are " << dt.get_hit_points() << std::endl;
    hit = 10;
    dt.takeDamage(hit);
    std::cout << "The hit points after takeDamage " << hit << " points are " << dt.get_hit_points() << std::endl;
    repair = 15;
    dt.beRepaired(repair);
    std::cout << "The hit points after beRepaired " << repair << " are " << dt.get_hit_points() << std::endl;
    std::cout << "The energy points are " << dt.get_energy_points() << std::endl;
    dt.guardGate();
    dt.highFivesGuys();
    dt.whoAmI();
    std::cout << std::endl;
}
