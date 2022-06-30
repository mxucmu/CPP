/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:32:31 by mxu               #+#    #+#             */
/*   Updated: 2021/10/11 15:32:29 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <string>
#include <iostream>

class Brain
{
    std::string ideas[100];
public:
    Brain();
    Brain(const std::string &);
    Brain(const Brain &);
    Brain & operator = (const Brain &);
    ~Brain();
    void        setIdea(const std::string &);
    std::string getIdea() const;
};

#endif
