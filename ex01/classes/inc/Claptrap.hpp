/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:32:14 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/30 23:33:47 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
	#define CLAPTRAP_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>

	class Claptrap
	{
		public:
			// Constructors
			Claptrap(void);
			Claptrap(const std::string name);
			Claptrap(const Claptrap& obj);

			// Destructor
			~Claptrap(void);

			// Operator overload:
			Claptrap&	operator=(const Claptrap& rhs);

			// Instance Public Methods:
			std::string		getName(void) const;
			unsigned int	getHitPoints(void) const;
			unsigned int	getEnergyPoints(void) const;
			unsigned int	getAttackDamage(void) const;
			void			attack(const std::string& target);
			void			takeDamage(unsigned int amount);
			void			beRepaired(unsigned int amount);

		private:
			// Instance attributes:
			std::string		_name;
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;

	};

	// Stream operator overload to print Claptrap Class instances:
	std::ostream& operator<<(std::ostream& os, const Claptrap& instance);

#endif // CLAPTRAP_HPP
