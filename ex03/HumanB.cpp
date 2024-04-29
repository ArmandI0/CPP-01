/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:44:08 by aranger           #+#    #+#             */
/*   Updated: 2024/04/29 16:50:32 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string a)
{
	name = a;
	weapon = nullptr;
}

HumanB::~HumanB()
{

}
void HumanB::setWeapon(Weapon a)
{
	weapon = new Weapon(a);
}

void HumanB::attack()
{
	if (weapon == nullptr)
		std::cout << name << " attacks with their" << " hands" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}