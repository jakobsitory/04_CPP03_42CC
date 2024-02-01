/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:44 by jschott           #+#    #+#             */
/*   Updated: 2024/01/29 12:06:02 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <vector>

int	main(void)
{
	std::vector<ClapTrap*> ClapTraps;
	std::vector<ScavTrap*> ScavTraps;
	std::string input;

	std::cout << "Welcome to the ScavTrap simulator!" << std::endl << std::endl;
	std::cout << "Enter names to create new ScavTraps" << std::endl;
	std::cout << "To start the simulation enter FIGHT" << std::endl;
	std::cout << "To exit enter EXIT" << std::endl;

	std::cin >> input;
	while (input != "FIGHT" && input != "EXIT"){
		ScavTraps.push_back(new ScavTrap(input));
		std::cin >> input;
	}
	int ct_size = ScavTraps.size();
	std::cout << "ScavTraps: " << ct_size << std::endl;

	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it)
		(*it)->beRepaired(1);
	std::cout << std::endl;
	
	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it)
		(*it)->takeDamage(10);
	std::cout << std::endl;

	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it)
		(*it)->attack("random ScavTrap");	
	std::cout << std::endl;

	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it){
		for (int i = 10; i >= 0; i--)
			(*it)->beRepaired(1);
		}
	std::cout << std::endl;
	
	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it)
		(*it)->attack("random ScavTrap");	
	std::cout << std::endl;

	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it)
		(*it)->takeDamage(10);
	std::cout << std::endl;
	
	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it)
		(*it)->attack("random ScavTrap");	
	std::cout << std::endl;

	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it)
		(*it)->beRepaired(1);
	std::cout << std::endl;

	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it)
		(*it)->guardGate();
	std::cout << std::endl;

	for (std::vector<ScavTrap*>::iterator it = ScavTraps.begin(); \
			it != ScavTraps.end(); ++it)
		delete *it;
	std::cout << std::endl;

	return 0;
}