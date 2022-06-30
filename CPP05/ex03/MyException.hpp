/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyException.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:41:04 by mxu               #+#    #+#             */
/*   Updated: 2021/10/13 16:18:18 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYEXCEPTION_HPP_
#define MYEXCEPTION_HPP_

#include <string>
#include <exception>
#include <cstring>

class MyException : public std::exception
{
    const std::string   _text;
    MyException();
public:
    MyException(const std::string &);
    ~MyException() _NOEXCEPT;
    const char *    what() const _NOEXCEPT; 
};

#endif
