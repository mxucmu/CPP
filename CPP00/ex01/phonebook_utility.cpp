/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utility.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 22:35:16 by mxu               #+#    #+#             */
/*   Updated: 2021/07/28 14:53:36 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void phbook::set_first_name(std::string first_name) {fnam = first_name;}
    
std::string phbook::get_first_name() const {return fnam;}

void phbook::set_last_name(std::string last_name) {lnam = last_name;}

std::string phbook::get_last_name() const {return lnam;}

void phbook::set_nickname(std::string nickname) {nnam = nickname;}

std::string phbook::get_nickname() const {return nnam;}

void phbook::set_phone_number(std::string phone_number) {pnum = phone_number;}

std::string phbook::get_phone_number() const {return pnum;}

void phbook::set_darkest_secret(std::string darkest_secret) {dsec = darkest_secret;}

std::string phbook::get_darkest_secret() const {return dsec;}

std::string short_version(std::string s)
{
    if (s.size() > 10)
        return(s.substr(0, 9) + '.');
    else
        return(s);
}

void        display_phonebook(phbook *ph, int count)
{
    std::cout << "List of PhoneBook Contacts:" << std::endl;
    for (int i = 0; i < count; i++)
        std::cout << std::setw(10) << std::right << i + 1 << '|' \
        << std::setw(10) << std::right << short_version(ph[i].get_first_name()) + '|' \
        << std::setw(10) << std::right << short_version(ph[i].get_last_name()) + '|' \
        << std::setw(10) << std::right << short_version(ph[i].get_nickname()) << std::endl;
}

void        print_person(phbook & ph)
{
    std::cout << "Here is the information of the person you have searched for:" << std::endl;
    std::cout << "first name: " << ph.get_first_name() << std::endl;
    std::cout << "last name: " << ph.get_last_name() << std::endl;
    std::cout << "nickname: " << ph.get_nickname() << std::endl;
    std::cout << "phone number: " << ph.get_phone_number() << std::endl;
    std::cout << "darkest secret: " << ph.get_darkest_secret() << std::endl;
}

void        add_person(phbook & ph)
{
    std::string temp;

    std::getline(std::cin, temp);
    std::cout << "first name:" << std::endl;
    std::getline(std::cin, temp);
    ph.set_first_name(temp);
    std::cout << "last name:" << std::endl;
    std::getline(std::cin, temp);
    ph.set_last_name(temp);
    std::cout << "nickname:" << std::endl;
    std::getline(std::cin, temp);
    ph.set_nickname(temp);
    std::cout << "phone number:" << std::endl;
    std::getline(std::cin, temp);
    ph.set_phone_number(temp);
    std::cout << "darkest_secret:" << std::endl;
    std::getline(std::cin, temp);
    ph.set_darkest_secret(temp);
}

void        search_person(phbook *ph, int count)
{
    char i;

    display_phonebook(ph, count);
    std::cout << "Please input the index of the person you are looking for:" << std::endl;
    std::cin >> i;
    if (i - '0' >= 1 && i - '0' <= count)
        print_person(ph[i - '0' - 1]);
    else
        std::cout << "Invalid choice.  Retry from the start." << std::endl;
}
