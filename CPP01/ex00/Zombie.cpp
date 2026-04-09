/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:21:34 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/09 15:24:33 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << "was created!";
}

Zombie::~Zombie()
{
    std::cout << "was destructed!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << Zombie::_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}
