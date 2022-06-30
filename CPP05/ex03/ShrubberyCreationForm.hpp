/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:06:40 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 17:26:09 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    const std::string   _target;
public:
    ShrubberyCreationForm(const std::string &);
    void    action() const;
};

#endif
