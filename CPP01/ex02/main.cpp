/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 23:42:30 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 00:12:29 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";

	std::string &stringREF = string; //referência
	std::string* stringPTR;
	stringPTR = &string; //ponteiro

	std::cout << "'string' Adress: " << &string << std::endl;
	std::cout << "'stringREF' Adress: " << &stringREF << std::endl;
	std::cout << "'stringPTR' Adress: " << stringPTR << std::endl;

	std::cout << "'string' value: " << string << std::endl;
	std::cout << "'stringREF' value: " << stringREF << std::endl;
	std::cout << "'stringPTR' value: " << *stringPTR << std::endl;
	
	return 0;
}
