/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auto <auto@local>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 16:51:00 by auto               #+#    #+#             */
/*   Updated: 2026/05/09 16:51:00 by auto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice& other): AMateria(other) {}

Ice& Ice::operator=(const Ice& other)
{
    AMateria::operator=(other);
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
