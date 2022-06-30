/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:52:51 by mxu               #+#    #+#             */
/*   Updated: 2021/06/19 00:00:49 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    std::string _name;
    int         _num;
    AMateria*   _am[4];
    Character();
public:
    Character(std::string const &);
    Character(const Character &);
    Character & operator = (const Character &);
    ~Character();
    std::string const & getName() const;
    int                 getNum() const;
    AMateria*           getAMateria(int) const;
    void                equip(AMateria*);
    void                unequip(int);
    void                use(int, ICharacter&);
};

#endif
