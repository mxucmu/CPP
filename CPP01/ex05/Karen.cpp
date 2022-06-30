/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:58:16 by mxu               #+#    #+#             */
/*   Updated: 2021/08/06 12:45:07 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void    Karen::f_debug(void)
{
    std::cout << "\"DEBUG\" level: You said you would help me with this project (even if I forced you to make the promise), but you have not done anything for me until now!" << std::endl << std::endl;
}

void    Karen::f_info(void)
{
    std::cout << "\"INFO\" level: I have not been sleeping well for three days, and I am so worried about the whole thing that I have lost 10 pounds!" << std::endl << std::endl;
}

void    Karen::f_warning(void)
{
    std::cout << "\"WARNING\"level: If you don't show any progress in your work or have no real intension of improving your attitude, you don't need to come in tomorrow!" << std::endl << std::endl;
}

void    Karen::f_error(void)
{
    std::cout << "\"ERROR\" level: This is unacceptable, I want to talk to you, we can start all over again, there must be a solution!" << std::endl << std::endl;
}

typedef void    (Karen::*kindof)(void);

void    Karen::complain(std::string level)
{
    kindof          act[4] = {&Karen::f_debug, &Karen::f_info, &Karen::f_warning, &Karen::f_error};
    std::string     name[4] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++)
            if (level == name[i])
                {
                    (this->*act[i])();
                    return ;
                }
    std::cout << "Karen is quiet today.  She is taking a break from talking, and she needs to think."  << std::endl << std::endl;
}
