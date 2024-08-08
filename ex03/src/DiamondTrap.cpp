/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:41 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:42:41 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/**
 * @brief Default constructor for the DiamondTrap class.
 */
DiamondTrap::DiamondTrap(void) : ClapTrap("fallback_clap_name"){
	this->_name = "default";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energypoints = ScavTrap::_energypoints;
	this->_attackdamage = FragTrap::_attackdamage;
	std::cout << "DiamondTrap " << this->_name << " Constructor called" << std::endl;
}

/**
 * @brief Parameterized constructor for the DiamondTrap class.
 * 
 * @param name std::string - The name to assign to the DiamondTrap object.
 */

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energypoints = ScavTrap::_energypoints;
	this->_attackdamage = FragTrap::_attackdamage;
	std::cout << "DiamondTrap " << this->_name << " Constructor called" << std::endl;
}

/**
 * @brief Copy constructor for the DiamondTrap class.
 * 
 * @param name const DiamondTrap& - The DiamondTrap object to copy.
 */
DiamondTrap::DiamondTrap(const DiamondTrap& name): FragTrap(name), ScavTrap(name){
	*this = name;
	std::cout << "DiamondTrap " << this->_name << " Copy Constructor called" << std::endl;
}

/**
 * @brief Destructor for the DiamondTrap class.
 */

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->_name << " Destructor called" << std::endl;
}

/**
 * @brief Assignment operator for the DiamondTrap class.
 * 
 * @param origin const DiamondTrap& - The DiamondTrap object to assign from.
 * @return DiamondTrap& - A reference to the assigned DiamondTrap object.
 */
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& origin){
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = origin._name;
	this->_hitpoints = origin._hitpoints;
	this->_energypoints = origin._energypoints;
	this->_attackdamage = origin._attackdamage;
	return *this;
}

/**
 * @brief whoAmI function for the DiamondTrap class.
 */
void DiamondTrap::whoAmI(void){
	std::cout << "I am Diamontrap " << this->_name << std::endl;
	std::cout << "I am derived from Claptrap " << ClapTrap::_name << std::endl;
}
