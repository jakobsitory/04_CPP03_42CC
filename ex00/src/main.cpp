/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:44 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:36:06 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <vector>

/**
 * @brief Main function for the ClapTrap simulator.
 * 
 * This program simulates the creation and interaction of ClapTrap objects. It allows the user to create ClapTraps by entering names,
 * and then simulates a series of actions including repairing, taking damage, and attacking. The simulation continues until the user
 * enters "FIGHT" to start the simulation or "EXIT" to terminate the program.
 * 
 * The main steps of the simulation are:
 * 1. Prompt the user to enter names for creating new ClapTraps or commands to control the simulation.
 * 2. Create ClapTrap objects for each name entered and store them in a vector.
 * 3. Once "FIGHT" is entered, the simulation starts, performing the following actions in order:
 *    a. Repair each ClapTrap by 1 hitpoint.
 *    b. Each ClapTrap takes 10 points of damage.
 *    c. Each ClapTrap attacks a "random ClapTrap".
 *    d. Repair each ClapTrap by 1 hitpoint 10 times in a row.
 * 4. The simulation ends when "EXIT" is entered, and the program cleans up any allocated resources.
 */
int	main(void)
{
	std::vector<ClapTrap*> ClapTraps;
	std::string input;

	std::cout << "Welcome to the ClapTrap simulator!" << std::endl << std::endl;
	std::cout << "Enter names to create new ClapTraps" << std::endl;
	std::cout << "To start the simulation enter FIGHT" << std::endl;
	std::cout << "To exit enter EXIT" << std::endl;

	std::cin >> input;
	while (input != "FIGHT" && input != "EXIT"){
		ClapTraps.push_back(new ClapTrap(input));
		std::cin >> input;
	}
	int ct_size = ClapTraps.size();
	std::cout << "ClapTraps: " << ct_size << std::endl;

	for (std::vector<ClapTrap*>::iterator it = ClapTraps.begin(); \
			it != ClapTraps.end(); ++it)
		(*it)->beRepaired(1);
	std::cout << std::endl;
	
	for (std::vector<ClapTrap*>::iterator it = ClapTraps.begin(); \
			it != ClapTraps.end(); ++it)
		(*it)->takeDamage(10);
	std::cout << std::endl;

	for (std::vector<ClapTrap*>::iterator it = ClapTraps.begin(); \
			it != ClapTraps.end(); ++it)
		(*it)->attack("random ClapTrap");	
	std::cout << std::endl;

	for (std::vector<ClapTrap*>::iterator it = ClapTraps.begin(); \
			it != ClapTraps.end(); ++it){
		for (int i = 10; i >= 0; i--)
			(*it)->beRepaired(1);
		}
	std::cout << std::endl;
	
	for (std::vector<ClapTrap*>::iterator it = ClapTraps.begin(); \
			it != ClapTraps.end(); ++it)
		(*it)->attack("random ClapTrap");	
	std::cout << std::endl;

	for (std::vector<ClapTrap*>::iterator it = ClapTraps.begin(); \
			it != ClapTraps.end(); ++it)
		(*it)->takeDamage(10);
	std::cout << std::endl;
	
	for (std::vector<ClapTrap*>::iterator it = ClapTraps.begin(); \
			it != ClapTraps.end(); ++it)
		(*it)->attack("random ClapTrap");	
	std::cout << std::endl;

	for (std::vector<ClapTrap*>::iterator it = ClapTraps.begin(); \
			it != ClapTraps.end(); ++it)
		(*it)->beRepaired(1);
	std::cout << std::endl;

	for (std::vector<ClapTrap*>::iterator it = ClapTraps.begin(); \
			it != ClapTraps.end(); ++it)
		delete *it;
	std::cout << std::endl;

	return 0;
}