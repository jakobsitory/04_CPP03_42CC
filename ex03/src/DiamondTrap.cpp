/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:41 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 12:47:38 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("fallback_clap_name"){
	this->_name = "default";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energypoints = ScavTrap::_energypoints;
	this->_attackdamage = FragTrap::_attackdamage;
	std::cout << "DiamondTrap " << this->_name << " Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energypoints = ScavTrap::_energypoints;
	this->_attackdamage = FragTrap::_attackdamage;
	std::cout << "DiamondTrap " << this->_name << " Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& name): FragTrap(name), ScavTrap(name){
	*this = name;
	std::cout << "DiamondTrap " << this->_name << " Copy Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->_name << " Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& origin){
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = origin._name;
	this->_hitpoints = origin._hitpoints;
	this->_energypoints = origin._energypoints;
	this->_attackdamage = origin._attackdamage;
	return *this;
}

void DiamondTrap::whoAmI(void){
	std::cout << "I am Diamontrap " << this->_name << std::endl;
	std::cout << "I am derived from Claptrap " << ClapTrap::_name << std::endl;
}
