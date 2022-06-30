/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:56:05 by mxu               #+#    #+#             */
/*   Updated: 2021/10/21 12:50:01 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP_
#define CONVERT_HPP_

#include <iostream>
#include <string>
#include <cstdlib>

bool    is_peculiar(const std::string &);
bool    is_char(const std::string &);
bool    is_int(const std::string &);
bool    is_float(const std::string &);
bool    is_double(const std::string &);
void    display_peculiar(const std::string &);
void    display_char(const std::string &);
void    display_int(const std::string &);
void    display_float(const std::string &);
void    display_double(const std::string &);

#endif
