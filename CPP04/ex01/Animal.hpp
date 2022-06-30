/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:55:19 by mxu               #+#    #+#             */
/*   Updated: 2021/10/08 16:47:58 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const std::string &);
    Animal(const Animal &);
    Animal & operator = (const Animal &);
    virtual ~Animal();
    const std::string & getType() const;
    void virtual        makeSound() const;
};

#endif
