/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:21:38 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/13 23:40:00 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* horde1 = zombieHorde(5, "Boo");
	Zombie* horde2 = zombieHorde(10, "Loo");

	horde1[0].announce();
	horde1[3].announce();

	horde2[0].announce();
	horde2[5].announce();
	horde2[9].announce();

	delete[] horde1;
	delete[] horde2;
	
	return 0;
}
