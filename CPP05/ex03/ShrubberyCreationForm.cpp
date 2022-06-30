/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:22:23 by mxu               #+#    #+#             */
/*   Updated: 2021/10/15 17:27:44 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const std::string ASCIItree[25] = { 
"                          _.|._                    \n",
"                           '|'                     \n",
"                          /   \\                    \n",
"                         /  o.~\\                   \n",
"                           / \\                     \n",
"                        /_.~'  _\\                  \n",
"                        /'.    o\\                  \n",
"                       / J '~.   \\                 \n",
"                      /_      '~._\\                \n",
"                      /   o     ~'\\                \n",
"                     /  J   .~~'   \\               \n",
"                    /_..~~''     o _\\              \n",
"                    / '..       J   \\              \n",
"                   /     ''~~..      \\             \n",
"                  /_      J    ''~~.._\\            \n",
"                  /  o          ..~~''\\            \n",
"                 /      ..~~~'''       \\           \n",
"                /_..~~''         J     _\\          \n",
"                / ''~~~..               \\          \n",
"               /   J     '''~~...    o   \\         \n",
"              /_            o    '''~~..._\\        \n",
"              /      o          ...~~~''' \\        \n",
"             /   J     ...~~~'''      J    \\       \n",
"            /:...~~~''':::::::::::::::::::::\\      \n",
"                        \\______/                   \n"
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) :
    Form("ShrubberyCreationForm", 145, 137), _target(target) {}

void    ShrubberyCreationForm::action() const
{
    std::ofstream   outfile(_target+"_shrubbery", std::ofstream::out);
    if ( (outfile.rdstate() & std::ofstream::failbit) != 0 )
    {
        std::cerr << "Error opening file for output." << std::endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < 25; i++)
        outfile << ASCIItree[i];
    outfile.close();
}
