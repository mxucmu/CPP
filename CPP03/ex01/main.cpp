/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:08:42 by mxu               #+#    #+#             */
/*   Updated: 2021/10/01 18:28:56 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    int         hit;
    int         repair;
    ScavTrap    st("Tat");

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
}
