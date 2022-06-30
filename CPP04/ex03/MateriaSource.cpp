/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:14:25 by mxu               #+#    #+#             */
/*   Updated: 2021/06/19 00:54:20 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _num(0)
{
    for (int i = 0; i < 4; i++)
        _am_store[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < _num; i++)
        delete _am_store[i];
}

void        MateriaSource::learnMateria(AMateria* am)
{
    if (_num < 4 && am)
        _am_store[_num++] = am;
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < _num; i++)
        if (_am_store[i]->getType() == type)
            return (_am_store[i]->clone());
    return nullptr;
}
