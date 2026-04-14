/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:27:05 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 18:16:50 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n=== 1. CONSTRUINDO ===" << std::endl;

    ScavTrap scav("Guardiao");
    ClapTrap clap("Inocente");

    std::cout << "\n=== 2. TESTANDO ATAQUE ===" << std::endl;

    scav.attack("Inocente");
    clap.takeDamage(20);

    std::cout << "\n=== 3. TESTANDO HERANÇA ===" << std::endl;

    scav.takeDamage(50);
    scav.beRepaired(20);

    std::cout << "\n=== 4. TESTANDO FILHO ===" << std::endl;
    scav.guardGate();

    std::cout << "\n=== 5. FIM DA EXECUÇÃO (DESTRUTORES) ===" << std::endl;

    return 0;
}
