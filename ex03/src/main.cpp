/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:55:11 by sawang            #+#    #+#             */
/*   Updated: 2023/10/25 13:27:02 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

int	main(void)
{
	/**
	 * DiamondTrap test
	*/
	std::cout << "DiamondTrap Test" << std::endl;
	DiamondTrap DiamondBilly;
	DiamondTrap DiamondBilly2("DiamondBilly2");
	DiamondBilly.whoAmI();
	DiamondBilly2.whoAmI();
	std::cout << std::endl;

	DiamondBilly.attack("DiamondBilly2");
	DiamondBilly2.takeDamage(DiamondBilly.getAttackDamage());
	//test
	std::cout << "DiamondBilly: \n" << DiamondBilly << std::endl;
	std::cout << "DiamondBilly2: \n" << DiamondBilly2 << std::endl;
	std::cout << std::endl;

	ClapTrap	ClapJim("ClapJim");
	ClapJim = DiamondBilly;
	// ClapJim.whoAmI(); error: ‘class ClapTrap’ has no member named ‘whoAmI()’
	ClapJim.attack("DiamondBilly");
	DiamondBilly.takeDamage(ClapJim.getAttackDamage());
	std::cout << "ClapJim: \n" << ClapJim << std::endl;
	std::cout << std::endl;

	DiamondTrap DiamondBilly3;
	DiamondBilly3 = DiamondBilly2;
	DiamondBilly3.whoAmI();
	std::cout << "DiamondBilly3: \n" << DiamondBilly3 << std::endl;

	// system("leaks main");

	return (0);
}
