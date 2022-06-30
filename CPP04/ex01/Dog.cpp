/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:45:33 by mxu               #+#    #+#             */
/*   Updated: 2021/10/11 16:12:43 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
    _Brain = new Brain ("DogIdea");
    std::cout << "Constructor of Dog called." << std::endl;
}

Dog::Dog(const Dog & rhs) : Animal("Dog")
{
    _Brain = new Brain (rhs.getIdea());
    std::cout << "Copy Constructor of Dog called." << std::endl;
}

Dog & Dog::operator = (const Dog & rhs)
{
    if (this != &rhs)
    {
        type = rhs.getType();
        for (int i = 0; i < 100; i++)
            _Brain->setIdea(rhs.getIdea());
    }
    return *this;
}

Dog::~Dog()
{
    if (_Brain)
        delete _Brain;
    std::cout << "Destructor of Dog called." << std::endl;
}

std::string     Dog::getIdea() const {return _Brain->getIdea();};

void            Dog::makeSound() const
{
    std::cout << "woof" << std::endl;
}
