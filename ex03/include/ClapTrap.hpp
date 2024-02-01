/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:36 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 12:39:27 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitpoints;
	unsigned int	_energypoints;
	unsigned int	_attackdamage;
	
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(std::string name, \
			unsigned int hitpoints, \
			unsigned int energypoints, \
			unsigned int attackdamage);
	ClapTrap(const ClapTrap& name);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& origin);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
