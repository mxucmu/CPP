/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:14:28 by mxu               #+#    #+#             */
/*   Updated: 2021/08/06 13:01:00 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen       she;
    std::string input; 

    if (argc == 1)
        std::cout << "Karen is quiet today.  She is taking a break from talking, and she needs to think."  << std::endl;
    if (argc > 2)
        std::cout << "Only one input string please.  Karen is easily confused with too much inputs." << std::endl;
    if (argc == 2)
    {
        input = argv[1];
        for (size_t j = 0; j < input.size(); j++)   
                    if (islower(input[j])) 
                        input[j]=toupper(input[j]);  
        she.filter(input);
    }
    return 0;
}
