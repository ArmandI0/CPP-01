/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:11:59 by aranger           #+#    #+#             */
/*   Updated: 2024/04/29 16:50:53 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon
{
	public:
		&Weapon(const Weapon typ);
		Weapon(std::string typ);
		~Weapon();
	
		std::string getType();
		void		setType(std::string w_type);
		
	private:
		std::string type;
	
};
