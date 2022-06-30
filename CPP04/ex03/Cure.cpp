/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 18:09:58 by mxu               #+#    #+#             */
/*   Updated: 2021/10/12 12:18:05 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

//Cure::Cure(const Cure & rhs) : AMateria(rhs) {}

AMateria*   Cure::clone() const 
{
    return (new Cure(*this));
}

void        Cure::use(ICharacter & target)
{
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
