/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 23:31:24 by mxu               #+#    #+#             */
/*   Updated: 2021/10/12 12:47:07 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _num(0)
{
    for (int i = 0; i < 4; i++)
        _am[i] = nullptr;
}

Character::Character(const Character & rhs)
{
    for (int i = 0; i < _num; i++)
        delete _am[i];
    _name = rhs.getName();
    _num = rhs.getNum();
    for (int i = 0; i < _num; i++)
        _am[i] = rhs.getAMateria(i);
}

Character & Character::operator = (const Character & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < _num; i++)
            delete _am[i];
        _name = rhs.getName();
        _num = rhs.getNum();
        for (int i = 0; i < _num; i++)
            _am[i] = rhs.getAMateria(i);
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < _num; i++)
        delete _am[i];
}


std::string const & Character::getName() const { return _name; }

int                 Character::getNum() const { return _num; }

AMateria*           Character::getAMateria(int idx) const 
{ 
    if (_num > 0 && idx < _num && idx >=0)
        return _am[idx]; 
    else
        return nullptr;
}

void                Character::equip(AMateria* am)
{
    if (_num < 4 && am)
        _am[_num++] = am;
}

void                Character::unequip(int idx)
{
    if (_num > 0 && idx < _num && idx >=0)
    {
        for (int i = idx; i < _num - 1; i++)
            _am[i] = _am[i + 1];
        _am[_num - 1] = nullptr;
    }
}

void                Character::use(int idx, ICharacter& target)
{
    if (_num > 0 && idx < _num && idx >=0)
        _am[idx]->use(target);
}
