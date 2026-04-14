/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 02:12:39 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 12:10:51 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string filename) : _inFile(filename)
{
    this->_outFile = filename + ".replace";
    
    std::cout << "[CONSTRUCTOR]" << filename << "opened" << std::endl;
    std::cout << "Output file created " << this->_outFile << std::endl;
}

Replacer::~Replacer()
{
    std::cout << "[DESTRUCTOR]" << "Replacer ended" << std::endl;
}

void Replacer::replace(std::string s1, std::string s2)
{
    std::ifstream in(this->_inFile.c_str());
    if (!in.is_open())
    {
        std::cerr << "Error: input file not opened!" << std::endl;
        return ;
    }
    
    std::ofstream out(this->_outFile.c_str());
    if (!out.is_open())
    {
        std::cerr << "Error: output file not created!" << std::endl;
        return ;
    }

    std::string line;
    if (s1.empty())
        return ;
    
    while(getline(in, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        out << line << std::endl;
    }
    in.close();
    out.close();
}