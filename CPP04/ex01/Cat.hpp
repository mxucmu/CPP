/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:50:13 by mxu               #+#    #+#             */
/*   Updated: 2021/10/11 16:06:28 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    Brain * _Brain;
public:
    Cat();
    Cat(const Cat &);
    Cat & operator = (const Cat &);
    ~Cat();
    std::string     getIdea() const;
    void            makeSound() const;
};

#endif
