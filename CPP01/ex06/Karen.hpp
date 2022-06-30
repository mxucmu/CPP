/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:13:12 by mxu               #+#    #+#             */
/*   Updated: 2021/08/06 12:42:00 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _KAREN_HPP_
#define _KAREN_HPP_

#include <string>
#include <iostream>

class Karen
{
    void    f_debug(void);
    void    f_info(void);
    void    f_warning(void);
    void    f_error(void);
public:
    Karen();
    ~Karen();
    void    filter(std::string);
};

#endif
