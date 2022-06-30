/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:43:02 by mxu               #+#    #+#             */
/*   Updated: 2021/10/11 15:36:35 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "ok";
    std::cout << "Constructor of empty Brain called." << std::endl;
}

Brain::Brain(const std::string & input_idea)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = input_idea;
    std::cout << "Constructor of Brain with uniform ideas called." << std::endl;
}

Brain::Brain(const Brain & rhs)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = rhs.getIdea();
}

Brain & Brain::operator = (const Brain & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = rhs.getIdea();
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor of Brain called." << std::endl;
}

void        Brain::setIdea(const std::string & input_idea)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = input_idea;
}

std::string Brain::getIdea() const {return ideas[0];}
