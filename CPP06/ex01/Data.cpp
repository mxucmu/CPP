/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:36:59 by mxu               #+#    #+#             */
/*   Updated: 2021/10/18 18:39:24 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t   serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*       deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
