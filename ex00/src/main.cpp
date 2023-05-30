/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:35:47 by isojo-go          #+#    #+#             */
/*   Updated: 2023/05/30 23:29:43 by isojo-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

static void	printYellowLine(std::string str)
{
	std::cout  << std::endl << "\033[0;33m" << str
				<< "\033[0;39m" << std::endl;
}

int main(void)
{
	printYellowLine("[ -------- CHECKING CLAPTRAP CLASS -------- ]");
	Claptrap cp1("iker");

	
	return (0);
}
