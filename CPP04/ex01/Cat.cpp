/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:51:15 by mxu               #+#    #+#             */
/*   Updated: 2021/10/11 16:13:14 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
    _Brain = new Brain ("CatIdea");
    std::cout << "Constructor of Cat called." << std::endl;
}

Cat::Cat(const Cat & rhs) : Animal("Cat")
{
    _Brain = new Brain (rhs.getIdea());
    std::cout << "Copy Constructor of Cat called." << std::endl;
}

Cat & Cat::operator = (const Cat & rhs)
{
    if (this != &rhs)
    {
        type = rhs.getType();
        for (int i = 0; i < 100; i++)
            _Brain->setIdea(rhs.getIdea());
    }
    return *this;
}

Cat::~Cat()
{
    if (_Brain)
        delete _Brain;
    std::cout << "Destructor of Cat called." << std::endl;
}

std::string     Cat::getIdea() const {return _Brain->getIdea();};

void            Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
