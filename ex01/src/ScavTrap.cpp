/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:41 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:39:02 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**
 * @brief Default constructor for the ScavTrap class.
 */
ScavTrap::ScavTrap(void) : ClapTrap("fallback", 100, 50, 20){
	std::cout << "ScavTrap " << this->_name << " Constructor called" << std::endl;
}

/**
 * @brief Parameterized constructor for the ScavTrap class.
 *  
 * @param name std::string - The name to assign to the ScavTrap object.
 */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap " << this->_name << " Constructor called" << std::endl;
}

/**
 * @brief Copy constructor for the ScavTrap class.
 * 
 * @param name const ScavTrap& - The ScavTrap object to copy.
 */

ScavTrap::ScavTrap(const ScavTrap& name){
	*this = name;
	std::cout << "ScavTrap " << this->_name << " Copy Constructor called" << std::endl;
}

/**
 * @brief Destructor for the ScavTrap class.
 */
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->_name << " Destructor called" << std::endl;
}

/**
 * @brief Assignment operator for the ScavTrap class.
 * 
 * @param origin const ScavTrap& - The ScavTrap object to assign from.
 * @return ScavTrap& - A reference to the assigned ScavTrap object.
 */
ScavTrap& ScavTrap::operator=(const ScavTrap& origin){
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = origin._name;
	this->_hitpoints = origin._hitpoints;
	this->_energypoints = origin._energypoints;
	this->_attackdamage = origin._attackdamage;
	return *this;
}

/**
 * @brief Attack action for the ScavTrap class.
 * 
 * @param target const std::string& - The name of the target to attack.
 */
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

/**
 * @brief Activates Gatekeeper mode for the ScavTrap.
 */
void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->_name;
	std::cout << " is now in Gate keeper mode" << std::endl;
}
