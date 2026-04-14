/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 00:16:37 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 00:52:28 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
	
	std::string _name;
	Weapon* _weapon;

	public:
	HumanB(std::string name);
	~HumanB();

	void setWeapon(Weapon& weapon);
	void attack();
};

#endif