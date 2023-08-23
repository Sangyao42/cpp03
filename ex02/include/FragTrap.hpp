/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:58:58 by sawang            #+#    #+#             */
/*   Updated: 2023/08/23 12:58:58 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &rhs);
		~FragTrap();

		void	highFivesGuys(void);
};

#endif
