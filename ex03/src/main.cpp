/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:55:11 by sawang            #+#    #+#             */
/*   Updated: 2023/10/24 23:00:27 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

int	main(void)
{
	// /**
	//  * ScavTrap test
	// */
	// std::cout << std::endl;
	// ScavTrap	ScavJim("ScavJim");
	// ScavTrap	ScavBob("ScavBob");
	// ClapTrap	John("John");

	// std::cout << std::endl;

	// for (int i = 0; i < 6; i++)
	// {
	// 	ScavJim.attack("ScavBob");
	// 	if (i == 1)
	// 		ScavBob.guardGate();
	// 	ScavBob.takeDamage(ScavJim.getAttackDamage());
	// 	ScavBob.beRepaired(1);
	// }

	// std::cout << std::endl;

	// // for (int i = 0; i < 4; i++)
	// // {
	// 	John.attack("ScavJim");
	// 	ScavJim.takeDamage(John.getAttackDamage());
	// 	ScavJim.beRepaired(1);
	// // }

	// std::cout << std::endl;

	// /**
	//  * ScavTrap copy constructor and copy assignment operator test
	// */
	// std::cout << "FragTrap test" << std::endl;
	// ScavTrap	a(ScavJim);
	// std::cout << a.getAttackDamage() << std::endl;

	// std::cout << std::endl;

	// FragTrap	FragWill("FragWill");
	// for (int i = 0; i < 2; i++)
	// {
	// 	ScavJim.attack("FragWill");
	// 	FragWill.takeDamage(ScavJim.getAttackDamage());
	// 	FragWill.beRepaired(1);
	// 	if (i == 1)
	// 		FragWill.highFivesGuys();
	// }

	// std::cout << std::endl;

	// FragTrap	test;
	// test.setAttackDamage(1);
	// std::cout << test.getAttackDamage() << std::endl;
	// FragTrap	b(FragWill);
	// std::cout << b.getAttackDamage() << std::endl;
	// std::cout << std::endl;

	/**
	 * DiamondTrap test
	*/
	std::cout << "DiamondTrap Test" << std::endl;
	DiamondTrap DiamondBilly;
	DiamondTrap DiamondBilly2("DiamondBilly2");
	DiamondBilly.whoAmI();
	DiamondBilly2.whoAmI();

	DiamondBilly.attack("DiamondBilly2");
	DiamondBilly2.takeDamage(DiamondBilly.getAttackDamage());
	//test
	std::cout << "DiamondBilly: " << DiamondBilly << std::endl;
	std::cout << "DiamondBilly2: " << DiamondBilly2 << std::endl;
	std::cout << std::endl;

	ClapTrap	ClapJim("ClapJim");
	ClapJim = DiamondBilly;
	std::cout << "ClapJim: " << ClapJim << std::endl;

	DiamondTrap DiamondBilly3;
	DiamondBilly3 = DiamondBilly2;
	DiamondBilly3.whoAmI();
	std::cout << "DiamondBilly3: " << DiamondBilly3 << std::endl;

	return (0);
}
