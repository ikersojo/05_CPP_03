/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:35:47 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/31 19:25:00 by isojo-go         ###   ########.fr       */
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
	Fragtrap cp0;
	Fragtrap cp1("iker");
	Fragtrap cp3(cp1);
	Fragtrap cp4;
	Fragtrap cp5 = cp1;

	cp4 = cp1;

	printBlueLine("Attack...");
	std::cout << cp0 << std::endl;
	cp0.attack("urko");
	cp0.attack("helene");
	cp0.attack("araia");
	cp0.attack("urko");
	cp0.attack("helene");
	cp0.attack("araia");
	cp0.attack("urko");
	cp0.attack("helene");
	cp0.attack("araia");
	cp0.attack("urko");
	cp0.attack("helene");
	cp0.attack("araia");


	printBlueLine("Take damage until death...");
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);
	std::cout << cp0 << " --> ";
	cp0.takeDamage(10);

	printBlueLine("Take damage...");
	std::cout << cp1 << " --> ";
	cp1.takeDamage(2);
	std::cout << cp1 << " --> ";
	cp1.takeDamage(2);
	std::cout << cp1 << " --> ";
	cp1.takeDamage(2);
	std::cout << cp1 << std::endl;

	printBlueLine("Repair damage...");
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << " --> ";
	cp1.beRepaired(2);
	std::cout << cp1 << std::endl;

	printBlueLine("Copied / Asigned Fragtraps un-damaged...");
	std::cout << cp3 << std::endl;
	std::cout << cp4 << std::endl;
	std::cout << cp5 << std::endl;

	printBlueLine("Copied / Asigned Fragtraps un-damaged...");
	cp0.highFivesGuys();
	cp1.highFivesGuys();
	cp3.highFivesGuys();
	cp4.highFivesGuys();
	cp5.highFivesGuys();

	printBlueLine("Destroy...");

	return (0);
}
