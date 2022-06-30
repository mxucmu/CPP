/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:54:21 by mxu               #+#    #+#             */
/*   Updated: 2021/10/20 14:41:43 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP_
#define BASE_HPP_

#include <time.h>
#include <stdlib.h>
#include <iostream>

class Base
{
public:
    virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base *  generate(void);
void    identify(Base*);
void    identify(Base&);

#endif
