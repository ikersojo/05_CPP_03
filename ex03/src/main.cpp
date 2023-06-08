/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:35:47 by isojo-go          #+#    #+#             */
/*   Updated: 2023/06/08 10:12:08 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

static void	printBlueLine(std::string str)
{
	std::cout  << std::endl << "\033[0;94m" << str
				<< "\033[0;39m" << std::endl;
}

int main(void)
{
	printBlueLine("[ -------- CHECKING FRAGTRAP CLASS -------- ]");
	printBlueLine("Create...");
	Diamondtrap dt0;
	Diamondtrap dt1("iker");
	Diamondtrap dt3(dt1);
	Diamondtrap dt4;
	Diamondtrap dt5 = dt1;

	dt4 = dt1;

	printBlueLine("Attack...");
	std::cout << dt0 << std::endl;
	dt0.attack("urko");
	dt0.attack("helene");
	dt0.attack("araia");
	dt0.attack("urko");
	dt0.attack("helene");
	dt0.attack("araia");
	dt0.attack("urko");
	dt0.attack("helene");
	dt0.attack("araia");
	dt0.attack("urko");
	dt0.attack("helene");
	dt0.attack("araia");


	printBlueLine("Take damage until death...");
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);
	std::cout << dt0 << " --> ";
	dt0.takeDamage(10);

	printBlueLine("Take damage...");
	std::cout << dt1 << " --> ";
	dt1.takeDamage(2);
	std::cout << dt1 << " --> ";
	dt1.takeDamage(2);
	std::cout << dt1 << " --> ";
	dt1.takeDamage(2);
	std::cout << dt1 << std::endl;

	printBlueLine("Repair damage...");
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << " --> ";
	dt1.beRepaired(2);
	std::cout << dt1 << std::endl;

	printBlueLine("Copied / Asigned Fragtraps un-damaged...");
	std::cout << dt3 << std::endl;
	std::cout << dt4 << std::endl;
	std::cout << dt5 << std::endl;

	printBlueLine("High Five...");
	dt0.highFivesGuys();
	dt1.highFivesGuys();
	dt3.highFivesGuys();
	dt4.highFivesGuys();
	dt5.highFivesGuys();

	printBlueLine("Guard Gate...");
	dt0.guardGate();
	dt1.guardGate();
	dt3.guardGate();
	dt4.guardGate();
	dt5.guardGate();

	printBlueLine("whoAmI...");
	dt0.whoAmI();
	dt1.whoAmI();
	dt3.whoAmI();
	dt4.whoAmI();
	dt5.whoAmI();

	printBlueLine("Destroy...");

	return (0);
}
