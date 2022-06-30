/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:33:09 by mxu               #+#    #+#             */
/*   Updated: 2021/10/07 14:34:26 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") 
{
    std::cout << "Constructor of WrongCat called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor of WrongCat called." << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
