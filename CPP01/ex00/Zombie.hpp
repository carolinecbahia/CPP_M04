/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:21:36 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/09 15:24:22 by ccavalca         ###   ########.fr       */
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
    Zombie(std::string name);
    ~Zombie();

    void announce(void);    
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif