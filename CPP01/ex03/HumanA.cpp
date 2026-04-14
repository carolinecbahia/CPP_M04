/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 00:16:42 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 12:28:17 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):_name(name), _type(weapon)
{
	std::cout << "[CONSTRUCTOR]" << name << " has enter the battle!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "[DESTRUCTOR]" << this->_name << " has left the battle!" << std::endl;	
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_type.getType() << std::endl;
}
