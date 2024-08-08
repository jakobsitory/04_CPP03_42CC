/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:44 by jschott           #+#    #+#             */
/*   Updated: 2024/08/08 12:40:35 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <vector>

/**
 * @brief Main function for the FragTrap simulator.
 * 
 * This program simulates the creation and interaction of FragTrap objects. It allows the user to create FragTraps by entering names,
 * and then simulates a series of actions including repairing, taking damage, and attacking. The simulation continues until the user
 * enters "FIGHT" to start the simulation or "EXIT" to terminate the program.
 * 
 * The main steps of the simulation are:
 * 1. Prompt the user to enter names for creating new FragTraps or commands to control the simulation.
 * 2. Create FragTrap objects for each name entered and store them in a vector.
 * 3. Once "FIGHT" is entered, the simulation starts, performing the following actions in order:
 *    a. Repair each FragTrap by 1 hitpoint.
 *    b. Each FragTrap takes 10 points of damage.
 *    c. Each FragTrap attacks a "random FragTrap".
 *    d. Repair each FragTrap by 1 hitpoint 11 times in a row.
 * 4. The simulation ends when "EXIT" is entered, and the program cleans up any allocated resources.
 */
int	main(void)
{
	std::vector<ClapTrap*> ClapTraps;
	std::vector<FragTrap*> FragTraps;
	std::string input;

	std::cout << "Welcome to theFragTrap simulator!" << std::endl << std::endl;
	std::cout << "Enter names to create new FragTraps" << std::endl;
	std::cout << "To start the simulation enter FIGHT" << std::endl;
	std::cout << "To exit enter EXIT" << std::endl;

	std::cin >> input;
	while (input != "FIGHT" && input != "EXIT"){
		FragTraps.push_back(new FragTrap(input));
		std::cin >> input;
	}
	int ct_size = FragTraps.size();
	std::cout << "FragTraps: " << ct_size << std::endl;

	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it)
		(*it)->beRepaired(1);
	std::cout << std::endl;
	
	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it)
		(*it)->takeDamage(10);
	std::cout << std::endl;

	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it)
		(*it)->attack("random FragTrap");	
	std::cout << std::endl;

	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it){
		for (int i = 10; i >= 0; i--)
			(*it)->beRepaired(1);
		}
	std::cout << std::endl;
	
	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it)
		(*it)->attack("random FragTrap");	
	std::cout << std::endl;

	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it)
		(*it)->takeDamage(10);
	std::cout << std::endl;
	
	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it)
		(*it)->attack("random FragTrap");	
	std::cout << std::endl;

	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it)
		(*it)->beRepaired(1);
	std::cout << std::endl;

	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it)
		(*it)->highFiveGuys();
	std::cout << std::endl;

	for (std::vector<FragTrap*>::iterator it = FragTraps.begin(); \
			it != FragTraps.end(); ++it)
		delete *it;
	std::cout << std::endl;

	return 0;
}