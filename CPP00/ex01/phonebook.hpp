/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:02:16 by mxu               #+#    #+#             */
/*   Updated: 2021/07/28 15:16:36 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
#define _PHONEBOOK_HPP_

#include <string>
#include <iostream>
#include <iomanip>

class phbook 
{
    std::string fnam;
    std::string lnam;
    std::string nnam;
    std::string pnum;
    std::string dsec;
public:
    void set_first_name(std::string first_name);
    std::string get_first_name() const;
    void set_last_name(std::string last_name);
    std::string get_last_name() const;
    void set_nickname(std::string nickname);
    std::string get_nickname() const;
    void set_phone_number(std::string phone_number);
    std::string get_phone_number() const;
    void set_darkest_secret(std::string darkest_secret);
    std::string get_darkest_secret() const;
};

std::string short_version(std::string s);
void        display_phonebook(phbook *ph, int count);
void        print_person(phbook & ph);
void        add_person(phbook & ph);
void        search_person(phbook *ph, int count);

#endif
