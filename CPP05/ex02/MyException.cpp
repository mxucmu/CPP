/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyException.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:21:56 by mxu               #+#    #+#             */
/*   Updated: 2021/10/13 16:18:46 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyException.hpp"

MyException::MyException(const std::string & error_message) : _text(error_message) {}

MyException::~MyException() _NOEXCEPT {}

const char *    MyException::what() const _NOEXCEPT
{
    return _text.c_str();
}
