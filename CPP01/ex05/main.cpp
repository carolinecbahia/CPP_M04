/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:37:41 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 12:39:52 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "=== TEST 1: DEBUG ===" << std::endl;
    harl.complain("DEBUG");

    std::cout << "=== TEST 2: INFO ===" << std::endl;
    harl.complain("INFO");

    std::cout << "=== TEST 3: WARNING ===" << std::endl;
    harl.complain("WARNING");

    std::cout << "=== TEST 4: ERROR ===" << std::endl;
    harl.complain("ERROR");

    std::cout << "=== TEST 5: INVALID PARAMETERS ===" << std::endl;
    harl.complain("ANYTHING");
    harl.complain("");

    return 0;
}