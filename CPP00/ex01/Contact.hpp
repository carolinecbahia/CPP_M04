/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 22:07:31 by ccavalca          #+#    #+#             */
/*   Updated: 2026/03/13 22:28:31 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact 
{

	private:
	std::string	_first_Name;
	std::string	_last_Name;
	std::string	_nickname;
	std::string	_phone_Number;
	std::string	_darkest_Secret;

	public:
	Contact();
	~Contact();

/*setters*/
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string PhoneNumber);
	void setDarkestSecret(std::string darkestSecret);

/*getters*/
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

};

#endif