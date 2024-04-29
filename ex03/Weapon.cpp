/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:10:44 by aranger           #+#    #+#             */
/*   Updated: 2024/04/29 16:50:45 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::&Weapon(const Weapon typ)
{
	this->type = typ.type;
}

Weapon::Weapon(std::string typ)
{
	type = typ;
}

Weapon::~Weapon()
{
	
}

std::string Weapon::getType()
{
	return (type);
}		
		
void Weapon::setType(std::string w_type)
{
	type = w_type;
}
