/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:41 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:40:21 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/**
 * @brief Default constructor for the FragTrap class.
 */
FragTrap::FragTrap(void) : ClapTrap("fallback", 100, 100, 30){
	std::cout << "FragTrap " << this->_name << " Constructor called" << std::endl;
}

/**
 * @brief Parameterized constructor for the FragTrap class.
 * 
 * @param name std::string - The name to assign to the FragTrap object.
 */
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap " << this->_name << " Constructor called" << std::endl;
}

/**
 * @brief Copy constructor for the FragTrap class.
 * 
 * @param name const FragTrap& - The FragTrap object to copy.
 */
FragTrap::FragTrap(const FragTrap& name){
	*this = name;
	std::cout << "FragTrap " << this->_name << " Copy Constructor called" << std::endl;
}

/**
 * @brief Destructor for the FragTrap class.
 */
FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " Destructor called" << std::endl;
}

/**
 * @brief Assignment operator for the FragTrap class.
 * 
 * @param origin const FragTrap& - The FragTrap object to assign from.
 * @return FragTrap& - A reference to the assigned FragTrap object.
 */
FragTrap& FragTrap::operator=(const FragTrap& origin){
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_name = origin._name;
	this->_hitpoints = origin._hitpoints;
	this->_energypoints = origin._energypoints;
	this->_attackdamage = origin._attackdamage;
	return *this;
}

/**
 * @brief High Five action for the FragTrap class.
 */
void FragTrap::highFiveGuys(void){
	std::cout << "FragTrap " << this->_name;
	std::cout << " high fives all other Traps" << std::endl;
}
