/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:21:07 by sawang            #+#    #+#             */
/*   Updated: 2023/08/21 17:32:14 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "default constructor is called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "copy constructor is called." << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "copy assignment is called." << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is destoyed!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead! Cannot attack!" << std::endl;
		return ;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to attack!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead! Cannot take more damage!" << std::endl;
		return ;
	}
	else if (this->_hitPoints <= amount)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead! Cannot be repaired!" << std::endl;
		return ;
	}
	else if(this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy to be repaired!" << std::endl;
		return ;
	}
	else if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " is repaired " << amount << " points of damage!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
}

void	ClapTrap::setAttackDamage(int amount)
{
	std::cout << "ClapTrap " << this->_name << " has now " << amount << " attack damage!" << std::endl;
	this->_attackDamage = amount;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

