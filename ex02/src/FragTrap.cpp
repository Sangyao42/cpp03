/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:05:37 by sawang            #+#    #+#             */
/*   Updated: 2023/08/23 13:05:37 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor is called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << this->_name << " is born!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor is called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap copy assignment is called." << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " is destoyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is asking for high fives!" << std::endl;
}

