/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 00:05:45 by sawang            #+#    #+#             */
/*   Updated: 2023/09/08 22:30:37 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &rhs);
		~ClapTrap();

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void	setAttackDamage(int amount);
		unsigned int	getAttackDamage(void) const;
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
