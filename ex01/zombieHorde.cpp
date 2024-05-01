/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranger <aranger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:58:46 by aranger           #+#    #+#             */
/*   Updated: 2024/05/01 12:13:48 by aranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	
	if (N <= 0 || N > 10000)
		return NULL;
	for(int i = 0; i < N; i++)
		horde[i].set_name(name);
	return horde;
}