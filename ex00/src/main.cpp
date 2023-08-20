/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:55:11 by sawang            #+#    #+#             */
/*   Updated: 2023/08/20 00:55:11 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

int	main(void)
{
	ClapTrap	Jim("Jim");
	ClapTrap	Bob("Bob");
	ClapTrap	John("John");

	Jim.setAttackDamage(5);
	for (int i = 0; i < 4; i++)
	{
		Jim.attack("Bob");
		Bob.takeDamage(Jim.getAttackDamage());
		Bob.beRepaired(1);
	}

	std::cout << std::endl;
	
	John.setAttackDamage(4);
	for (int i = 0; i < 4; i++)
	{
		John.attack("Jim");
		Jim.takeDamage(John.getAttackDamage());
		Jim.beRepaired(1);
		Jim.beRepaired(1);
		Jim.beRepaired(1);
		Jim.beRepaired(1);
		Jim.beRepaired(1);
		Jim.beRepaired(1);
		Jim.beRepaired(1);
	}

	return (0);
}
