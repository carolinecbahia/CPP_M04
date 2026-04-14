/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:27:05 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 15:58:00 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "======" << std::endl;
    
    ClapTrap clap("Clap");
    ClapTrap trap("Trap");

    std::cout << "======" << std::endl;
    
    clap.attack("Trap");
    trap.takeDamage(5);
    
    std::cout << "======" << std::endl;

    trap.beRepaired(3);

    std::cout << "======" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        clap.attack("o vento");
    }
    
    std::cout << "======" << std::endl;

    trap.takeDamage(20);
    trap.attack("Clap");  
    trap.beRepaired(10); 
    trap.takeDamage(5);
    
    std::cout << "======" << std::endl;
    
    return 0;
}
