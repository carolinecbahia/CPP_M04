/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:23:24 by ccavalca          #+#    #+#             */
/*   Updated: 2026/03/13 21:54:49 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	int			i;
	int			j;
	unsigned char	ch;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ch = static_cast<unsigned char>(argv[i][j]);
			std::cout << static_cast<char>(std::toupper(ch));
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
