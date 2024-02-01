/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:44 by jschott           #+#    #+#             */
/*   Updated: 2024/01/04 15:14:47 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <vector>

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