/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:17:42 by aranger           #+#    #+#             */
/*   Updated: 2024/04/29 22:05:42 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void	Harl::complain(std::string level)
{
	void (Harl::*pt[4])();
	std::string	tab[4];

	pt[0] = &debug;
	pt[1] = &info;	
	pt[2] = &warning;
	pt[3] = &error;

	tab[0] = "DEBUG";
	tab[1] = "INFO";
	tab[2] = "WARNING";
	tab[3] = "ERROR";	

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(tab[i]))
			(pt[i]);
	}
}

void	Harl::debug(void)
{
	
}

void	Harl::info(void)
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}
void	Harl::warning(void)
{

}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}