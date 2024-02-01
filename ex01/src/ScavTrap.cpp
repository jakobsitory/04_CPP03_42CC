/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:41 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 12:45:49 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("fallback", 100, 50, 20){
	std::cout << "ScavTrap " << this->_name << " Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap " << this->_name << " Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& name){
	*this = name;
	std::cout << "ScavTrap " << this->_name << " Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->_name << " Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& origin){
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = origin._name;
	this->_hitpoints = origin._hitpoints;
	this->_energypoints = origin._energypoints;
	this->_attackdamage = origin._attackdamage;
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if (!this->_hitpoints){
		std::cout << "ScavTrap " << this->_name;
		std::cout << " has no hitpoints to attack " << target << std::endl;
		return ;
	}
	if (!this->_energypoints){
		std::cout << "ScavTrap " << this->_name;
		std::cout << " has no energypoints to attack " << target << std::endl;
		return ;
	}
	--this->_energypoints;
	std::cout << "ScavTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attackdamage;
	std::cout << " points of damage!" << std::endl;
	
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->_name;
	std::cout << " is now in Gate keeper mode" << std::endl;
}
