/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 02:12:55 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 12:02:25 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

#include <iostream>
#include <fstream>

class Replacer{
    private:
    std::string _inFile;
    std::string _outFile;
    std::string s1;
    std::string s2;

    public:
    Replacer(std::string filename);
    ~Replacer();

    void replace(std::string s1, std::string s2);

};

#endif