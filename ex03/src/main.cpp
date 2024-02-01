/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:44 by jschott           #+#    #+#             */
/*   Updated: 2024/01/29 13:34:38 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <vector>

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