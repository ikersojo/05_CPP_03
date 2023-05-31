/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:25:32 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/31 21:37:53 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
	#define SCAVTRAP_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include "../inc/Claptrap.hpp"

	class Scavtrap : virtual public Claptrap
	{
		public:
			// Constructors
			Scavtrap(void);
			Scavtrap(const std::string name);
			Scavtrap(const Scavtrap& obj);

			// Destructor
			~Scavtrap(void);

			// Operator overload:
			Scavtrap&	operator=(const Scavtrap& rhs);

			// Instance Public Methods:
			void	attack(const std::string& target);
			void	guardGate(void);
	};

	// Stream operator overload to print Scavtrap Class instances:
	std::ostream& operator<<(std::ostream& os, const Scavtrap& instance);

#endif // SCAVTRAP_HPP
