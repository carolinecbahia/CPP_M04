/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:27:05 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 18:26:54 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n=== 1. CONTRUÇÃO ===" << std::endl;

    FragTrap frag("Alegria");
    ScavTrap scav("Guardiao");
    ClapTrap clap("Alvo");

    std::cout << "\n=== 2. TESTES ===" << std::endl;

    frag.attack("Alvo");
    scav.attack("Alvo");
    clap.takeDamage(30);

    std::cout << "\n=== 3. TESTANDO HERANÇA ===" << std::endl;
    frag.takeDamage(99);
    frag.beRepaired(50);

    std::cout << "\n=== 4. TESTANDO A HABILIDADE ESPECIAL ===" << std::endl;
    frag.highFivesGuys();
    scav.guardGate();

    std::cout << "\n=== 5. DESTRUTORES ===" << std::endl;

    return 0;
}