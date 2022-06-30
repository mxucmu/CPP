/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:52:58 by mxu               #+#    #+#             */
/*   Updated: 2021/10/12 12:09:32 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria & rhs)
{
    _type = rhs.getType();
}

AMateria & AMateria::operator = (const AMateria & rhs)
{
    if (this != &rhs)
    {
        _type = rhs.getType();
    }
    return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const { return _type; }
