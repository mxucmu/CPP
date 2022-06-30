/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:45:33 by mxu               #+#    #+#             */
/*   Updated: 2021/10/06 19:03:36 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
    std::cout << "Constructor of Dog called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog called." << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "woof" << std::endl;
}
