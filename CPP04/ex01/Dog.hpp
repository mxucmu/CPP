/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:40:41 by mxu               #+#    #+#             */
/*   Updated: 2021/10/11 15:47:34 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    Brain * _Brain;
public:
    Dog();
    Dog(const Dog &);
    Dog & operator = (const Dog &);
    ~Dog();
    std::string     getIdea() const;
    void            makeSound() const;
};

#endif
