/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 22:40:27 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/09 12:29:21 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook   pb;
    std::string cmd;

    while (true)
    {
        std::cout << "Enter your command: ";
        if (!std::getline(std::cin, cmd))
        {
            std::cout << "\n[EOF] Forcing exit..." << std::endl;
            break ;
        }
        if (cmd == "SEARCH")
        {
            pb.searchContact();
        }
        else if (cmd == "ADD")
        {
            pb.addContact();
        }
        else if (cmd == "EXIT")
        {
            return (0);
        }
        else
            std::cout << "Choose one valid command. ADD, SEARCH or EXIT!" << std::endl;
    }
    return (0);
}