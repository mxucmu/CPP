/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:56:04 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 17:42:52 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) :
    Form("RobotomyRequestForm", 72, 45), _target(target) {}

void    RobotomyRequestForm::action() const
{
    int temp;

    srand(time(NULL)); srand(time(NULL));
    temp = rand() % 2;
    if (temp)
        std::cout << "Drill baby drill..." << std::endl
        << _target << " has been robotomized successfully (50% of the time)." << std::endl;
    else
        std::cout << "Drill baby drill..." << std::endl
        << _target << " failed to robotomized." << std::endl;
}
