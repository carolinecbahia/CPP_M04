/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 22:26:14 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/09 13:37:43 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook()
{
    this->_index = 0;
}
PhoneBook::~PhoneBook()
{
    
}

std::string PhoneBook::getValidInput(std::string prompt) const
{
	std::string input;

    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);

        if (std::cin.eof()) {
            std::cout << "\n[EOF] Forcing Exit..." << std::endl;
            exit(0);
        }
        if (!input.empty()) {
            return input;
        }
        std::cout << "Error: the field can not be empty!" << std::endl;
    }
}

std::string PhoneBook::formatField(std::string text) const
{
    if (text.length() > 10)
        return text.substr(0, 9) + ".";
    return text;
}

void PhoneBook::addContact()
{
	std::string temp;

    temp = getValidInput("Enter the First name: ");
    _contacts[_index].setFirstName(temp);

    temp = getValidInput("Enter the Last name: ");
    _contacts[_index].setLastName(temp);

    temp = getValidInput("Enter the nickname: ");
    _contacts[_index].setNickname(temp);

    temp = getValidInput("Enter the Phone Number: ");
    _contacts[_index].setPhoneNumber(temp);

    temp = getValidInput("Enter your Darkest Secret: ");
    _contacts[_index].setDarkestSecret(temp);

    _index++;
    if (_index == 8) {
        _index = 0;
    }

    std::cout << "Success: contact added!" << std::endl;
}

void PhoneBook::searchContact() const
{
    std::cout << std::string(45, '-') << std::endl;
    std::cout << "|" << std::setw(10) << "Index";
    std::cout << "|" << std::setw(10) << "First Name";
    std::cout << "|" << std::setw(10) << "Last Name";
    std::cout << "|" << std::setw(10) << "Nickname" << std::endl;

    int i = 0;
    while (i < 8)
    {
        if(!_contacts[i].getFirstName().empty())
        {
            std::cout << "|" << std::setw(10) << i;
            std::cout << "|" << std::setw(10) << formatField(_contacts[i].getFirstName());
            std::cout << "|" << std::setw(10) << formatField(_contacts[i].getLastName());
            std::cout << "|" << std::setw(10) << formatField(_contacts[i].getNickname());
            std::cout << std::endl;
        }
        i++;
    }
    std::cout << std::string(45, '-') << std::endl;

    std::string temp;
    temp = getValidInput("\nEnter the contact Index number: ");
    
    if (temp.length() == 1 && temp[0] >= '0' && temp[0] <= '7')
    {
        int index = temp[0] - '0';

        if (_contacts[index].getFirstName().empty())
        {
            std::cout << "Contact not found at this index." << std::endl;
        }
        else
        {
           std::cout << "\n*** CONTACT DETAILS ***" << std::endl;
           std::cout << "First Name      : " << _contacts[index].getFirstName() << std::endl;
           std::cout << "Last Name       : " << _contacts[index].getLastName() << std::endl;
           std::cout << "Nickname        : " << _contacts[index].getNickname() << std::endl;
           std::cout << "Phone Number    : " << _contacts[index].getPhoneNumber() << std::endl;
           std::cout << "Darkest Secret  : " << _contacts[index].getDarkestSecret() << std::endl;
           std::cout << "************************" << std::endl;
        }
    }
    else
    {
        std::cout << "Error: Invalid index. Must be a number between 0 and 7." << std::endl;
    }
}
