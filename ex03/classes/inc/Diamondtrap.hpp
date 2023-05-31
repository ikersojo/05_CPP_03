/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamondtrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:23:49 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/31 22:18:45 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
	#define DIAMONDTRAP_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include "../inc/Claptrap.hpp"
	#include "../inc/Fragtrap.hpp"
	#include "../inc/Scavtrap.hpp"

	class Diamondtrap : public Fragtrap, public Scavtrap
	{
		public:
			// Constructors
			Diamondtrap(void);
			Diamondtrap(const std::string name);
			Diamondtrap(const Diamondtrap& obj);

			// Destructor
			~Diamondtrap(void);

			// Operator overload:
			Diamondtrap&	operator=(const Diamondtrap& rhs);

			// Instance Public Methods:
			std::string		getName(void) const;
			void			whoAmI(void);
			void			attack(const std::string& target);
			
		
		private:
			std::string	_name;
	};

	// Stream operator overload to print Diamondtrap Class instances:
	std::ostream& operator<<(std::ostream& os, const Diamondtrap& instance);

#endif // DIAMONDTRAP_HPP