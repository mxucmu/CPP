/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:51:15 by mxu               #+#    #+#             */
/*   Updated: 2021/10/06 19:08:17 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
    std::cout << "Constructor of Cat called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat called." << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
