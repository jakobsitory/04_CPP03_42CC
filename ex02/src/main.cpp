/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschott <jschott@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:16:44 by jschott           #+#    #+#             */
/*   Updated: 2024/01/29 12:06:59 by jschott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <vector>

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