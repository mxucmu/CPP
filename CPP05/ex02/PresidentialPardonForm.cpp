/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:10:32 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 17:30:25 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) :
    Form("PresidentialPardonForm", 25, 5), _target(target) {}

void    PresidentialPardonForm::action() const
{
    std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
