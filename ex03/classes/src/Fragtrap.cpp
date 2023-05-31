/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:26:17 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/31 19:31:46 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fragtrap.hpp"

// Constructors
/* ************************************************************************** */

Fragtrap::Fragtrap(void) : Claptrap()
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Fragtrap constructor called"
					<< "\033[0;39m" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

Fragtrap::Fragtrap(const std::string name) : Claptrap(name)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Named Fragtrap constructor called (name = "
					<< this->_name << ")" << "\033[0;39m" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

Fragtrap::Fragtrap(const Fragtrap& obj) : Claptrap(obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Fragtrap Copy constructor called"
					<< "\033[0;39m" << std::endl;
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Fragtrap::~Fragtrap(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Fragtrap Destructor called (name = "
					<< this->_name << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Fragtrap&	Fragtrap::operator=(const Fragtrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

// Instance methods:
/* ************************************************************************** */

void	Fragtrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "Fragtrap " << this->getName() << " attacks " << target
					<< " causing " << this->getAttackDamage() << " points of damage!"
					<< std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints > 0)
		std::cout << "Fragtrap " << this->getName() << " is dead already!" << std::endl;
	else
		std::cout << "Fragtrap " << this->getName() << " run out of energy already!" << std::endl;
}

void	Fragtrap::highFivesGuys(void)
{
	std::cout << "Fragtrap " << this->getName() << " highs five!!!! 🖐"  << std::endl;
}

// Stream operator overload to print Fragtrap Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Fragtrap& instance)
{
	os << "Fragtrap " << instance.getName() << " [hp: " << instance.getHitPoints()
		<< " / ep: " << instance.getEnergyPoints() << " / attack: "
		<< instance.getAttackDamage() << "]";
	return (os);
}
