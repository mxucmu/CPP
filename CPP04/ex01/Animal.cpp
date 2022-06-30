/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:28:17 by mxu               #+#    #+#             */
/*   Updated: 2021/10/08 16:49:36 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "Constructor of Animal called." << std::endl;
}

Animal::Animal(const std::string & Type) : type(Type)
{
    std::cout << "The Animal constructor with input type " << type << " has been called." 
        << std::endl;
}
    
Animal::Animal(const Animal & rhs)
{
    type = rhs.getType();
}

Animal & Animal::operator = (const Animal & rhs)
{
    if (this != &rhs)
        type = rhs.getType();
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal called." << std::endl;
}

const std::string & Animal::getType() const {return type;}

void                Animal::makeSound() const 
{
    std::cout << "pure silence" << std::endl;
}
