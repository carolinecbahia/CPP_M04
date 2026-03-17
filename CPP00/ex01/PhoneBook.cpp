/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 22:26:14 by ccavalca          #+#    #+#             */
/*   Updated: 2026/03/13 22:41:57 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

std::string PhoneBook::getValidInput(std::string prompt)
{
	std::string input;

    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);

        if (std::cin.eof()) {
            std::cout << "\n[EOF] Saindo..." << std::endl;
            exit(0);
        }
        if (!input.empty()) {
            return input; // Devolve a resposta validada
        }
        std::cout << "Erro: O campo não pode ficar vazio!" << std::endl;
    }
}

void PhoneBook::addContact()
{
	std::string temp;

    // Usamos a nossa ferramenta auxiliar para fazer a pergunta e já validar o loop
    temp = getValidInput("Digite o Primeiro Nome: ");
    _contacts[_index].setFirstName(temp);

    temp = getValidInput("Digite o Sobrenome: ");
    _contacts[_index].setLastName(temp);

    temp = getValidInput("Digite o Apelido: ");
    _contacts[_index].setNickname(temp);

    temp = getValidInput("Digite o Telefone: ");
    _contacts[_index].setPhoneNumber(temp);

    temp = getValidInput("Digite o Segredo Mais Sombrio: ");
    _contacts[_index].setDarkestSecret(temp);

    // Depois de preencher TUDO, aí sim a catraca gira!
    _index++;
    if (_index == 8) {
        _index = 0;
    }

    std::cout << "Contato adicionado com sucesso!" << std::endl;
}

void searchContact()
{
	
}
