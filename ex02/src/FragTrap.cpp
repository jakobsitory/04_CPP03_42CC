/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:41 by jschott           #+#    #+#             */
/*   Updated: 2024/01/31 12:46:25 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("fallback", 100, 100, 30){
	std::cout << "FragTrap " << this->_name << " Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap " << this->_name << " Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& name){
	*this = name;
	std::cout << "FragTrap " << this->_name << " Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& origin){
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_name = origin._name;
	this->_hitpoints = origin._hitpoints;
	this->_energypoints = origin._energypoints;
	this->_attackdamage = origin._attackdamage;
	return *this;
}

void FragTrap::highFiveGuys(void){
	std::cout << "FragTrap " << this->_name;
	std::cout << " high fives all other Traps" << std::endl;
}
