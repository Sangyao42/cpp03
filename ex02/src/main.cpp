/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:55:11 by sawang            #+#    #+#             */
/*   Updated: 2023/08/21 17:49:33 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int	main(void)
{
	/**
	 * ScavTrap test
	*/
	std::cout << std::endl;
	ScavTrap	ScavJim("ScavJim");
	ScavTrap	ScavBob("ScavBob");
	ClapTrap	John("John");

	std::cout << std::endl;

	for (int i = 0; i < 6; i++)
	{
		ScavJim.attack("ScavBob");
		if (i == 1)
			ScavBob.guardGate();
		ScavBob.takeDamage(ScavJim.getAttackDamage());
		ScavBob.beRepaired(1);
	}

	std::cout << std::endl;

	// for (int i = 0; i < 4; i++)
	// {
		John.attack("ScavJim");
		ScavJim.takeDamage(John.getAttackDamage());
		ScavJim.beRepaired(1);
	// }

	std::cout << std::endl;

	/**
	 * ClapTrap copy constructor and copy assignment operator test
	*/
	ScavTrap	a(ScavJim);
	std::cout << a.getAttackDamage() << std::endl;

	std::cout << std::endl;

	FragTrap	FragWill("FragWill");
	for (int i = 0; i < 2; i++)
	{
		ScavJim.attack("FragWill");
		FragWill.takeDamage(ScavJim.getAttackDamage());
		FragWill.beRepaired(1);
		if (i == 1)
			FragWill.highFivesGuys();
	}

	std::cout << std::endl;

	FragTrap	b(FragWill);
	std::cout << b.getAttackDamage() << std::endl;

	std::cout << std::endl;

	return (0);
}
