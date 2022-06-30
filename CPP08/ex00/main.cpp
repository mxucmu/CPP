/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:51:55 by mxu               #+#    #+#             */
/*   Updated: 2021/10/31 05:48:32 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    int                 a[] = {1, 3, 5, 7, 9, 11};
    std::vector<int>    v1(a, a + 6); 

    std::cout << std::endl << "Vector implementation" << std::endl;
    disp_v(v1);
    easyfind(v1, 11);
    easyfind(v1, 8);
    std::cout << std::endl;

    std::list<int>    v2(a, a + 6); 

    std::cout << "List implementation" << std::endl;
    disp_v(v2);
    easyfind(v2, 11);
    easyfind(v2, 8);
    std::cout << std::endl;
}
