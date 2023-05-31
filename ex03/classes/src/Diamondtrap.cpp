/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:26:55 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/31 22:25:14 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Diamondtrap.hpp"

// Constructors
/* ************************************************************************** */

Diamondtrap::Diamondtrap(void): Claptrap()
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Diamondtrap constructor called"
					<< "\033[0;39m" << std::endl;
	this->_name = "unknown";
	Claptrap::_name = "unknown_clap_name";
	this->setHitPoints(Fragtrap::getHitPoints());
	this->setEnergyPoints(Scavtrap::getEnergyPoints());
	this->setAttackDamage(Fragtrap::getAttackDamage());
}

Diamondtrap::Diamondtrap(const std::string name) : Claptrap(name + "_clap_name"), _name(name)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Named Diamondtrap constructor called (name = "
					<< this->_name << ")" << "\033[0;39m" << std::endl;
	this->_name = name;
	this->setHitPoints(Fragtrap::getHitPoints());
	this->setEnergyPoints(Scavtrap::getEnergyPoints());
	this->setAttackDamage(Fragtrap::getAttackDamage());
}

Diamondtrap::Diamondtrap(const Diamondtrap& obj)// : Claptrap(obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Diamondtrap Copy constructor called"
					<< "\033[0;39m" << std::endl;
	this->_name = obj._name;
	this->Claptrap::_name = obj._name + "_clap_name";
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Diamondtrap::~Diamondtrap(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Diamondtrap Destructor called (name = "
					<< this->_name << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Diamondtrap&	Diamondtrap::operator=(const Diamondtrap& rhs)
{
	if (this != &rhs)
	{
		this->Claptrap::_name = rhs._name + "_clap_name";
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

// Instance methods:
/* ************************************************************************** */

std::string		Diamondtrap::getName(void) const
{
	return (this->_name);
}

void	Diamondtrap::attack(const std::string& target)
{
	Scavtrap::attack(target);
}

void	Diamondtrap::whoAmI(void)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "DiamondTrap name is " << this->getName() << std::endl;
		std::cout << "    --> Its ClapTrap name is " << Claptrap::getName() << std::endl;
	}
	else if (this->_energyPoints > 0)
		std::cout << "DiamondTrap " << this->getName() << " is dead already!" << std::endl;
	else
		std::cout << "DiamondTrap " << this->getName() << " run out of energy already!" << std::endl;
}

// Stream operator overload to print Diamondtrap Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Diamondtrap& instance)
{
	os << "Diamondtrap " << instance.getName() << " [hp: " << instance.getHitPoints()
		<< " / ep: " << instance.getEnergyPoints() << " / attack: "
		<< instance.getAttackDamage() << "]";
	return (os);
}
