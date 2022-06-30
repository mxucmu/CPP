/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:31:16 by mxu               #+#    #+#             */
/*   Updated: 2021/10/18 18:36:42 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP_
#define DATA_HPP_

#include <string>

struct Data
{
    const std::string   _name;
};

uintptr_t   serialize(Data* ptr);
Data*       deserialize(uintptr_t raw);

#endif
