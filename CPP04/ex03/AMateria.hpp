/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 16:41:16 by mxu               #+#    #+#             */
/*   Updated: 2021/10/12 12:09:02 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

class ICharacter;

#include <string>

class AMateria
{
    AMateria();
protected:
    std::string     _type;
public:
    AMateria(std::string const &);
    AMateria(const AMateria &);
    AMateria & operator = (const AMateria &);
    virtual             ~AMateria();
    std::string const & getType() const;
    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter & ) = 0;
};

#endif
