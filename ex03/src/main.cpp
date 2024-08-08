/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:44 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:42:58 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <vector>

/**
 * @file main.cpp
 * 
 * This file contains the main function for a simulation program that demonstrates the use of the DiamondTrap class, which inherits
 * from both the FragTrap and ScavTrap classes. The program allows users to create DiamondTrap objects by entering names, and then
 * simulates a series of actions including repairing, taking damage, and attacking.
 * 
 * The main steps of the program are:
 * 1. Welcome the user and provide instructions for creating DiamondTraps or controlling the simulation.
 * 2. Read user input until "FIGHT" or "EXIT" is entered. If a name is entered, a new DiamondTrap object is created with that name.
 * 3. Display the total number of DiamondTraps created.
 * 4. Simulate repairing each DiamondTrap by 1 hitpoint.
 * 5. Simulate each DiamondTrap taking 10 points of damage.
 * 6. Simulate each DiamondTrap attacking a "random DiamondTrap".
 * 7. Simulate repairing each DiamondTrap by 1 hitpoint 11 times in a row.
 * 
 * The simulation ends when the user enters "EXIT". The program demonstrates dynamic memory allocation for DiamondTrap objects and
 * the use of vectors to manage a collection of pointers to these objects.
 */
int	main(void)
{
	std::vector<ClapTrap*> ClapTraps;
	std::vector<DiamondTrap*> DiamondTraps;
	std::string input;

	std::cout << "Welcome to the DiamondTrap simulator!" << std::endl << std::endl;
	std::cout << "Enter names to create new DiamondTraps" << std::endl;
	std::cout << "To start the simulation enter FIGHT" << std::endl;
	std::cout << "To exit enter EXIT" << std::endl;

	std::cin >> input;
	while (input != "FIGHT" && input != "EXIT"){
		DiamondTraps.push_back(new DiamondTrap(input));
		std::cin >> input;
	}
	int ct_size = DiamondTraps.size();
	std::cout << "DiamondTraps: " << ct_size << std::endl;

	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it)
		(*it)->beRepaired(1);
	std::cout << std::endl;
	
	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it)
		(*it)->takeDamage(10);
	std::cout << std::endl;

	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it)
		(*it)->attack("random DiamondTrap");	
	std::cout << std::endl;

	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it){
		for (int i = 10; i >= 0; i--)
			(*it)->beRepaired(1);
		}
	std::cout << std::endl;
	
	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it)
		(*it)->attack("random DiamondTrap");	
	std::cout << std::endl;

	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it)
		(*it)->takeDamage(10);
	std::cout << std::endl;
	
	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it)
		(*it)->attack("random DiamondTrap");	
	std::cout << std::endl;

	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it)
		(*it)->beRepaired(1);
	std::cout << std::endl;

	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it)
		(*it)->whoAmI();
	std::cout << std::endl;

	for (std::vector<DiamondTrap*>::iterator it = DiamondTraps.begin(); \
			it != DiamondTraps.end(); ++it)
		delete *it;
	std::cout << std::endl;

	return 0;
}