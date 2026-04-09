/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 22:40:32 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/09 12:40:54 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{

}

void Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this-> _phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this-> _darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const
{
    return (this->_firstName);
}

std::string Contact::getLastName() const
{
    return (this->_lastName);
}

std::string Contact::getNickname() const
{
    return (this->_nickname);
}

std::string Contact::getPhoneNumber() const
{
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
    return (this->_darkestSecret);
}