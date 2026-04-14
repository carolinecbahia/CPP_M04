/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:27:54 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 18:26:54 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap" << this->_name <<  " is ready for battle!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap Copy Assignment operator called" << std::endl;
    if(this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " has been destroyed!" << std::endl; 
    std::cout << "The fight has ended!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!";
        std::cout << std::endl;
        this->_energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " has no energy or health to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        if (amount > (unsigned)this->_hitPoints)
            this->_hitPoints = 0;
        else
            this->_hitPoints -= amount;
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage" << ", remaining " << this->_hitPoints << " of Hit Points!";
        std::cout << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " is already dead, stop beating it!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " recover" << amount << " of Hit Points, remaining " << this->_energyPoints << " of Energy Points!";
        std::cout << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " has no energy or health to repair itself!" << std::endl;
    }
}