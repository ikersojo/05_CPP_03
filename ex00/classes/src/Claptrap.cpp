/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:26:21 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/30 23:35:39 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Claptrap.hpp"

// Constructors
/* ************************************************************************** */

Claptrap::Claptrap(void) : _name("unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Default Claptrap constructor called"
					<< "\033[0;39m" << std::endl;
}

Claptrap::Claptrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Named Claptrap constructor called (name = "
					<< this->_name << ")" << "\033[0;39m" << std::endl;
}

Claptrap::Claptrap(const Claptrap& obj)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Copy constructor called"
					<< "\033[0;39m" << std::endl;
	*this = obj;
}

// Destructor
/* ************************************************************************** */

Claptrap::~Claptrap(void)
{
	if (DEBUG == 1)
		std::cout << "\033[0;33m" << "Claptrap Destructor called (name = "
					<< this->_name << ")" << "\033[0;39m" << std::endl;
}

// Operator overload:
/* ************************************************************************** */

Claptrap&	Claptrap::operator=(const Claptrap& rhs)
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

std::string		Claptrap::getName(void) const
{
	return (this->_name);
}

unsigned int	Claptrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	Claptrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	Claptrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void	Claptrap::attack(const std::string& target) // hay que gestionar target???
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target
					<< " causing " << this->getAttackDamage() << " points of damage!"
					<< std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints > 0)
		std::cout << "ClapTrap " << this->getName() << " is dead already!" << std::endl;
	else
		std::cout << "ClapTrap " << this->getName() << " run out of already!" << std::endl;
}

void	Claptrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " takes " << amount
					<< " points of damage!" << std::endl;
		if (this->_hitPoints <= amount)
		{
			this->_hitPoints = 0;
			std::cout << "ClapTrap " << this->getName() << " died!" << std::endl;
		}
		else
			this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is dead already!" << std::endl;
}

void	Claptrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " auto-repaired " << amount
					<< " hit points!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
	else if (this->_energyPoints > 0)
		std::cout << "ClapTrap " << this->getName() << " is dead already!" << std::endl;
	else
		std::cout << "ClapTrap " << this->getName() << " run out of already!" << std::endl;
}

// Stream operator overload to print Claptrap Class instances:
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& os, const Claptrap& instance)
{
	os << "Claptrap " << instance.getName() << " [hp: " << instance.getHitPoints()
		<< " / ep: " << instance.getEnergyPoints() << "]";
	return (os);
}
