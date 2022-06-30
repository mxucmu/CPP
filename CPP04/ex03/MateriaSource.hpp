/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 11:41:47 by mxu               #+#    #+#             */
/*   Updated: 2021/06/19 01:00:41 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

#include <new>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    int         _num;
    AMateria*   _am_store[4];
public:
    MateriaSource();
    ~MateriaSource();
    void        learnMateria(AMateria*);
    AMateria*   createMateria(std::string const & type);
};

#endif
