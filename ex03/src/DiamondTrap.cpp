/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:40:32 by sawang            #+#    #+#             */
/*   Updated: 2023/10/25 13:03:01 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
// #include "ScavTrap.hpp"
// #include "FragTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name("DiamondTrap")
{
	this->ClapTrap::_name = this->_name + "_clap_name";
	ScavTrap originalScavTrap;
	this->_energyPoints = originalScavTrap.getEnergyPoints();
	FragTrap originalFragTrap;
	this->_hitPoints = originalFragTrap.getHitPoints();
	this->_attackDamage = originalFragTrap.getAttackDamage();
	std::cout << "DiamondTrap default constructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	ScavTrap originalScavTrap;
	this->_energyPoints = originalScavTrap.getEnergyPoints();
	FragTrap originalFragTrap;
	this->_hitPoints = originalFragTrap.getHitPoints();
	this->_attackDamage = originalFragTrap.getAttackDamage();
	std::cout << "DiamondTrap " << this->_name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << "DiamondTrap copy constructor is called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap copy assignment is called." << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
		this->_name = rhs._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " is destoyed!" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "DiamondTrap's ClapTrap name: " << this->ClapTrap::_name << std::endl;
}

