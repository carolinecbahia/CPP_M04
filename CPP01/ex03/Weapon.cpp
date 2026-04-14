/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 00:16:50 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 00:51:04 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "The " << type << " has been choosen!" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "The weapon has been destroied!" << std::endl;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType() const
{
	return (this->_type);
}
