/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:53:14 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 17:28:34 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>

class RobotomyRequestForm : public Form
{
    const std::string   _target;
public:
    RobotomyRequestForm(const std::string &);
    void    action() const;
};

#endif
