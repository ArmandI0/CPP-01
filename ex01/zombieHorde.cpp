/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:58:46 by aranger           #+#    #+#             */
/*   Updated: 2024/04/29 10:46:21 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	
	if (N <= 0)
		return nullptr;
	for(int i = 0; i < N; i++)
		horde[i].set_name("name");
	return horde;
}