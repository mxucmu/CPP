/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:42:54 by mxu               #+#    #+#             */
/*   Updated: 2021/07/30 16:18:03 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void    replace (const std::string s1, const std::string s2, std::string & line1, \
                std::string & line2);

void    replace (const std::string s1, const std::string s2, std::string & line);

int     main(int argc, char **argv)
{
    std::string filename, filenameOut;
    std::string s1, s2; 
    std::string line1, line2; 

    if (argc != 4)
    {
        std::cout << "None of the input filename and the two strings can be \
            empty strings." << std::endl;
        return 1;
    }

    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    std::ifstream infile(filename, std::ifstream::in);
    if ( (infile.rdstate() & std::ifstream::failbit) != 0 )
    {
        std::cerr << "Error opening file for input." << std::endl;
        return 1;
    }

    for (size_t i = 0; i < filename.size(); i++)   
            if (islower(filename[i])) 
                filename[i]=toupper(filename[i]); 
    filenameOut =  filename + ".replace";
    std::ofstream outfile(filenameOut, std::ofstream::out);
    if ( (outfile.rdstate() & std::ofstream::failbit) != 0 )
    {
        std::cerr << "Error opening file for output." << std::endl;
        return 1;
    }

    std::getline(infile, line1);
    std::getline(infile, line2);
    while (infile.good())
    {
        replace(s1, s2, line1, line2);
        outfile << line1 << std::endl; 
        line1 = line2;
        std::getline(infile, line2); 
    }
    replace(s1, s2, line1);
    outfile << line1 << std::endl;
    
    infile.close();
    outfile.close();
    return 0;
} 

void    replace (const std::string s1, const std::string s2, std::string & line1, \
                std::string & line2)
{
    std::string temp;
    std::size_t start_loc = 0;
    std::size_t replace_loc = 0;
    int         count = 0;
    int         indicator = 0;
    
    temp = line1 + " " + line2;
    while (true)
    {
        replace_loc = temp.find(s1, start_loc);
        if (replace_loc == std::string::npos) break;
        indicator = ((line1.find(s1, start_loc) == std::string::npos) && \
            (replace_loc  + count * (s1.size() - s2.size()) <= line1.size())) ? 1 : 0;
        if (replace_loc  + count * (s1.size() - s2.size()) > line1.size()) break;
        temp.erase(replace_loc, s1.size());
        temp.insert(replace_loc, s2);
        start_loc = replace_loc + s2.size() + 1;
        count++;
    }
    if (count > 0 && indicator == 0)
    {
        line2 = temp.substr(line1.size() - count * (s1.size() - s2.size()) + 1, line2.size());
        line1 = temp.substr(0, line1.size() - count * (s1.size() - s2.size()));
    }
    else if (count > 0 && indicator == 1)
    {
        line1 = temp.substr(0, start_loc - 1);
        line2 = temp.substr(start_loc);
    }
}

void    replace (const std::string s1, const std::string s2, std::string & line)
{
    std::size_t start_loc = 0;
    std::size_t replace_loc = 0;

    while (true)
    {
        replace_loc = line.find(s1, start_loc);
        if (replace_loc == std::string::npos) break;
        line.erase(replace_loc, s1.size());
        line.insert(replace_loc, s2);
        start_loc = replace_loc + s2.size() + 1;
    }
}
