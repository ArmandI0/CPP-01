/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:45:23 by aranger           #+#    #+#             */
/*   Updated: 2024/04/29 14:51:43 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string a);
		~HumanB();
		void attack();
		void setWeapon(Weapon a);
		
	private:
		Weapon	*weapon;
		std::string	name;
};
