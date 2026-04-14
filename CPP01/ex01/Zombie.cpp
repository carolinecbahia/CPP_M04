/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:21:34 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/13 23:38:48 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << " A new zombie was created!" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " was created!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " was destructed!" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

