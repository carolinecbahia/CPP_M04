/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auto <auto@local>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:10:00 by auto               #+#    #+#             */
/*   Updated: 2026/05/09 17:10:00 by auto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    MateriaSource src;
    src.learnMateria(new Ice());
    src.learnMateria(new Cure());

    Character alice("Alice");
    AMateria* tmp;

    tmp = src.createMateria("ice");
    alice.equip(tmp);
    tmp = src.createMateria("cure");
    alice.equip(tmp);

    Character bob("Bob");
    alice.use(0, bob);
    alice.use(1, bob);

    return 0;
}
