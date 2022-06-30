/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:52:19 by mxu               #+#    #+#             */
/*   Updated: 2021/10/21 14:30:10 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool    is_peculiar(const std::string & in)
{
    return in == "0" || in == "0.0" || in == "0.0f"
        || in == "-inff" || in == "+inff" || in == "nanf"
        || in == "-inf" || in == "+inf" || in == "nan";
}

bool    is_char(const std::string & in)
{
    return in.size() == 1 && 
        ((in >= "!" && in <= "/") || (in >= ":" && in <= "~"));
}

bool    is_int(const std::string & in)
{
    return atoi(static_cast<const char*>(in.c_str())) != 0 &&
        (atoi(static_cast<const char*>(in.c_str())) - atof(static_cast<const char*>(in.c_str()))) == 0.0;
}

bool    is_float(const std::string & in)
{
    return in.find('.') != std::string::npos && in.find('f') != std::string::npos &&
        atof(static_cast<const char*>(in.c_str())) != 0;
}

bool    is_double(const std::string & in)
{
    return in.find('.') != std::string::npos  &&
        atof(static_cast<const char*>(in.c_str())) != 0;
}

void    display_peculiar(const std::string & in)
{
    if (in == "0" || in == "0.0" || in == "0.0f")
    {
        std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: 0" << std::endl;
        std::cout << "float: 0.0f" << std::endl;
        std::cout << "double: 0.0" << std::endl;
        return ;
    }
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (in == "-inff" || in == "+inff" || in == "nanf")
    {
        std::cout << "float: " << in << std::endl;
        std::cout << "double: " << in.substr(0, in.size() - 1) << std::endl;
    }
    if (in == "-inf" || in == "+inf" || in == "nan")
    {
        std::cout << "float: " << in << "f" << std::endl;
        std::cout << "double: " << in << std::endl;
    }
}

void    display_char(const std::string & in)
{
    std::cout << "char: " << in << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void    display_int(const std::string & in)
{
    if (atoi(static_cast<const char*>(in.c_str())) >= 33 &&
        atoi(static_cast<const char*>(in.c_str())) <= 126)
        std::cout << "char: " << 
            static_cast<char>((atoi(static_cast<const char*>(in.c_str())))) << std::endl;
    else
        std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << atoi((char*)in.c_str()) << std::endl;
    std::cout << "float: " << atoi((char*)in.c_str()) << ".0f" << std::endl;
    std::cout << "double: " << atoi((char*)in.c_str()) << ".0" << std::endl;
}

void    display_float(const std::string & in)
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << in << std::endl;
    std::cout << "double: " << in.substr(0, in.size() - 1) << std::endl;
}

void    display_double(const std::string & in)
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << in << "f" << std::endl;
    std::cout << "double: " << in << std::endl;
}
