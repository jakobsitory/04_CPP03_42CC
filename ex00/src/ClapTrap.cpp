/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:41 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:35:49 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * @brief Default constructor for the ClapTrap class.
 * 
 * Initializes a ClapTrap object with default values. The name is set to "fallback", hitpoints and energypoints are set to 10,
 * and attack damage is set to 0. Outputs a message indicating that the constructor was called.
 */
ClapTrap::ClapTrap(void) : _name("fallback"), _hitpoints(10), \
										_energypoints(10), _attackdamage(0){
	std::cout << "ClapTrap " << this->_name << " Constructor called" << std::endl;
}

/**
 * @brief Parameterized constructor for the ClapTrap class. * 
 * @param name std::string - The name to assign to the ClapTrap object.
 */
ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), \
										_energypoints(10), _attackdamage(0){
	std::cout << "ClapTrap " << this->_name << " Constructor called" << std::endl;
}

/**
 * @brief Copy constructor for the ClapTrap class. * 
 * @param name const ClapTrap& - The ClapTrap object to copy.
 */
ClapTrap::ClapTrap(const ClapTrap& name){
	*this = name;
	std::cout << "ClapTrap " << this->_name << " Copy Constructor called" << std::endl;
}

/**
 * @brief Destructor for the ClapTrap class.
 */
ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << this->_name << " Destructor called" << std::endl;
}

/**
 * @brief Assignment operator for the ClapTrap class.
 * 
 * @param origin const ClapTrap& - The ClapTrap object to assign from.
 * @return ClapTrap& - A reference to the assigned ClapTrap object.
 */
ClapTrap& ClapTrap::operator=(const ClapTrap& origin){
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = origin._name;
	this->_hitpoints = origin._hitpoints;
	this->_energypoints = origin._energypoints;
	this->_attackdamage = origin._attackdamage;
	return *this;
}

/**
 * @brief Attack action for the ClapTrap class. * 
 * @param target const std::string& - The name of the target to attack.
 */
void ClapTrap::attack(const std::string& target){
	if (!this->_hitpoints){
		std::cout << "ClapTrap " << this->_name;
		std::cout << " has no hitpoints to attack " << target << std::endl;
		return ;
	}
	if (!this->_energypoints){
		std::cout << "ClapTrap " << this->_name;
		std::cout << " has no energypoints to attack " << target << std::endl;
		return ;
	}
	--this->_energypoints;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attackdamage;
	std::cout << " points of damage!" << std::endl;
	
}

/**
 * @brief Takes damage on the ClapTrap object.
 * 
 * @param amount unsigned int - The amount of damage to take.
 */
void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitpoints < amount)
		amount = this->_hitpoints;
	this->_hitpoints -= amount;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " took " << amount;
	std::cout << " points of damage and has " << this->_hitpoints;
	std::cout << " hitpoints left" << std::endl;
}

/**
 * @brief Repairs the ClapTrap object.
 * 
 * @param amount unsigned int - The amount of hitpoints to repair.
 */
void ClapTrap::beRepaired(unsigned int amount){
	if (!this->_hitpoints){
		std::cout << "ClapTrap " << this->_name;
		std::cout << " has no hitpoints to repair itself" << std::endl;
		return ;
	}
	if (!this->_energypoints){
		std::cout << "ClapTrap " << this->_name;
		std::cout << " has no energypoints to repair itself" << std::endl;
		return ;
	}

	--this->_energypoints;
	this->_hitpoints += amount;
	
	std::cout << "ClapTrap " << this->_name;
	std::cout << " repaired itself and now has ";
	std::cout << this->_hitpoints << " hitpoints and ";
	std::cout << this->_energypoints << " energypoints left" << std::endl;
}
