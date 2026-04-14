/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:21:36 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/13 23:38:30 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
    private:
    std::string _name;

    public:
	Zombie();
    Zombie(std::string name);
    ~Zombie();

    void setName(std::string name);   
	void announce(void); 
};

Zombie* zombieHorde( int N, std::string name );

#endif