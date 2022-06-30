/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:25:27 by mingxinxu         #+#    #+#             */
/*   Updated: 2021/05/09 22:57:51 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else 
    {
        for (int i = 1; i < argc; i++)
            {
                std::string s = argv[i];
                for (size_t j = 0; j < s.size(); j++)   
                    if (islower(s[j])) 
                        s[j]=toupper(s[j]);  
                std::cout << s;
            }     
        std::cout << std::endl;
    }
    return 0;
}
