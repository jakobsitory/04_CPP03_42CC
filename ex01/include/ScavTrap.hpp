/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:36 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 12:45:07 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
// private:
// 	std::string		_name;
// 	unsigned int	_hitpoints;
// 	unsigned int	_energypoints;
// 	unsigned int	_attackdamage;
	
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& name);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& origin);

	void attack(const std::string& target);
	void guardGate(void);
};

#endif
