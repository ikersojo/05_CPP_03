/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:26:12 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/31 21:37:53 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
	#define FRAGTRAP_HPP
	#ifndef DEBUG
		#define DEBUG 0
	#endif
	#include <iostream>
	#include "../inc/Claptrap.hpp"

	class Fragtrap : virtual public Claptrap
	{
		public:
			// Constructors
			Fragtrap(void);
			Fragtrap(const std::string name);
			Fragtrap(const Fragtrap& obj);

			// Destructor
			~Fragtrap(void);

			// Operator overload:
			Fragtrap&	operator=(const Fragtrap& rhs);

			// Instance Public Methods:
			void	attack(const std::string& target);
			void	highFivesGuys(void);
	};

	// Stream operator overload to print Fragtrap Class instances:
	std::ostream& operator<<(std::ostream& os, const Fragtrap& instance);

#endif // FRAGTRAP_HPP
