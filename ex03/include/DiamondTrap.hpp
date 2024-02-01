/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:36 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 12:47:15 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;
	// ClapTrap::_name;
	// FragTrap::_hitpoints;
	// ScavTrap::_energypoints;
	// FragTrap::_attackdamage;
		
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& name);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& origin);

	// ScavTrap::attack();
	void whoAmI(void);
};

#endif
