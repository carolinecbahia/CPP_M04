/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 22:02:20 by ccavalca          #+#    #+#             */
/*   Updated: 2026/03/13 22:38:26 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{

	private:
	Contact _contacts[8];
	int _index;
	std::string getValidInput(std::string prompt);

	public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void searchContact() const;

};

#endif