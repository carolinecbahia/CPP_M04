/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auto <auto@local>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 16:52:00 by auto               #+#    #+#             */
/*   Updated: 2026/05/09 16:52:00 by auto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure& other): AMateria(other) {}

Cure& Cure::operator=(const Cure& other)
{
    AMateria::operator=(other);
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
