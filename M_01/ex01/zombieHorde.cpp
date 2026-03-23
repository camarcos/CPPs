/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:34:56 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/23 17:40:34 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{

	Zombie *horde = new Zombie[N];

	int i = 0;
	while (i < N)
	{
		horde[i].setName(name);
//		horde[i].setName(name + std::to_string(i + 1));
		i++;
	}
	return horde;
}
