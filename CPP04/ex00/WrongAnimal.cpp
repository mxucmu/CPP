/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:29:51 by mxu               #+#    #+#             */
/*   Updated: 2021/10/07 14:31:47 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
    std::cout << "Constructor of WrongAnimal called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string & Type) : type(Type)
{
    std::cout << "The WrongAnimal constructor with input type " << type << " has been called." 
        << std::endl;
}
    
WrongAnimal::WrongAnimal(const WrongAnimal & rhs)
{
    type = rhs.getType();
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal & rhs)
{
    if (this != &rhs)
        type = rhs.getType();
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of WrongAnimal called." << std::endl;
}

const std::string & WrongAnimal::getType() const {return type;}

void                WrongAnimal::makeSound() const 
{
    std::cout << "pure silence" << std::endl;
}
