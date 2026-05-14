/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auto <auto@local>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 16:58:00 by auto               #+#    #+#             */
/*   Updated: 2026/05/09 16:58:00 by auto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        storage[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; ++i)
        storage[i] = other.storage[i] ? other.storage[i]->clone() : NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
        {
            delete storage[i];
            storage[i] = other.storage[i] ? other.storage[i]->clone() : NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        delete storage[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m) return;
    for (int i = 0; i < 4; ++i)
    {
        if (!storage[i])
        {
            storage[i] = m;
            return;
        }
    }
    // if full, delete passed materia to avoid leak
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (storage[i] && storage[i]->getType() == type)
            return storage[i]->clone();
    }
    return NULL;
}
