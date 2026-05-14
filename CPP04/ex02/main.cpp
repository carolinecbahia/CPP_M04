/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:19:00 by ccavalca          #+#    #+#             */
/*   Updated: 2026/05/09 16:43:41 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "===== TESTE ARRAY =====" << std::endl;

	const int size = 4;
	AAnimal* animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}
	std::cout << std::endl;

	std::cout << "===== DELETANDO =====" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];
	std::cout << std::endl;
    
	std::cout << "===== DEEP COPY =====" << std::endl;

	Dog original;

	original.getBrain()->setIdeas(0, "Chase cats");

	Dog copy(original);

	original.getBrain()->setIdeas(0, "Eat snacks");

	std::cout << "Original idea: "
			<< original.getBrain()->getIdeas(0)
			<< std::endl;

	std::cout << "Copy idea: "
			<< copy.getBrain()->getIdeas(0)
			<< std::endl;

	std::cout << std::endl;

	std::cout << "Original brain address: "
			<< original.getBrain()
			<< std::endl;

	std::cout << "Copy brain address: "
			<< copy.getBrain()
			<< std::endl;
    
	std::cout << "===== END OF TESTS =====" << std::endl;

	return (0);
}
