/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:25:46 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/31 19:26:30 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Scavtrap.hpp"

// Constructors
/* ************************************************************************** */

Scavtrap::Scavtrap(void) : Claptrap()
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Scavtrap constructor called"
					<< "\033[0;39m" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

Scavtrap::Scavtrap(const std::string name) : Claptrap(name)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Named Scavtrap constructor called (name = "
					<< this->_name << ")" << "\033[0;39m" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

Scavtrap::Scavtrap(const Scavtrap& obj) : Claptrap(obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Scavtrap Copy constructor called"
					<< "\033[0;39m" << std::endl;
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Scavtrap::~Scavtrap(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Scavtrap Destructor called (name = "
					<< this->_name << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Scavtrap&	Scavtrap::operator=(const Scavtrap& rhs)
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

void	Scavtrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target
					<< " causing " << this->getAttackDamage() << " points of damage!"
					<< std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints > 0)
		std::cout << "ScavTrap " << this->getName() << " is dead already!" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " run out of energy already!" << std::endl;
}

void	Scavtrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode."  << std::endl;
}

// Stream operator overload to print Scavtrap Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Scavtrap& instance)
{
	os << "Scavtrap " << instance.getName() << " [hp: " << instance.getHitPoints()
		<< " / ep: " << instance.getEnergyPoints() << " / attack: "
		<< instance.getAttackDamage() << "]";
	return (os);
}
