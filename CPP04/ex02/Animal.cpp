/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:28:17 by mxu               #+#    #+#             */
/*   Updated: 2021/10/11 16:45:44 by mxu              ###   ########.fr       */
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
