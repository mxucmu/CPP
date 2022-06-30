/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:22:43 by mxu               #+#    #+#             */
/*   Updated: 2021/07/28 15:02:53 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    std::string s;
    phbook      ph[8];
    int         index = 0;

    std::cout << "To Use the Awesome PhoneBook, Input ADD, SEARCH or EXIT." << std::endl;
    while (1)
    {
        std::cin >> s;
        for (size_t i = 0; i < s.size(); i++)   
            if (islower(s[i])) 
                s[i]=toupper(s[i]);  
        if (s == "EXIT")
        {
            std::cout << "Bye bye!" << std::endl;
            return 0;
        }
        else if (s == "ADD")
        {
            if (index >= 8)
                std::cout << "The PhoneBook is full.  Your input will replace the oldest contact." << std::endl;
            add_person(ph[index % 8]);
            index++;
        }
        else if (s == "SEARCH")
        {
            if (index == 0)
                {
                    std::cout << "The PhoneBook is empty. You can ADD or EXIT." << std::endl;
                    continue;
                }
            else 
                search_person(ph, index >= 8 ? 8 : index);
        }
        else
        {
            std::cout << "Your choice is invalid, the only key words accepted are ADD, SEARCH or EXIT. \
                Please try again." << std::endl;
            continue;
        }
        std::cout << "To Use the Awesome PhoneBook Again, Input ADD, SEARCH or EXIT." << std::endl;
    }
}
