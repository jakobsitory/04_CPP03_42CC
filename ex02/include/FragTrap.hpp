/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:36 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 12:47:05 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
		
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& name);
	~FragTrap();
	FragTrap& operator=(const FragTrap& origin);

	// void attack(const std::string& target);
	void highFiveGuys(void);
};

#endif
