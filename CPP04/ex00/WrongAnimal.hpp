/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:28:03 by mxu               #+#    #+#             */
/*   Updated: 2021/10/07 14:29:20 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string &);
    WrongAnimal(const WrongAnimal &);
    WrongAnimal & operator = (const WrongAnimal &);
    ~WrongAnimal();
    const std::string & getType() const;
    void                makeSound() const;
};

#endif
