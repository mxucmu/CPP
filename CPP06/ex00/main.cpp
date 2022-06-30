/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:54:07 by mxu               #+#    #+#             */
/*   Updated: 2021/10/21 12:59:34 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong input argument." << std::endl;
        return 1;
    }
    
    std::string input = argv[1];
        
    if (is_peculiar(input))
        display_peculiar(input); 
    else if (is_char(input))
        display_char(input);
    else if (is_int(input))
        display_int(input);
    else if (is_float(input))
        display_float(input);
    else if (is_double(input))
        display_double(input);
    else
    {
        std::cout << "Incompatible input format." << std::endl;
        return 1;
    }
}
