/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:21:00 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 12:37:52 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	Zombie *horde = zombieHorde(N, "zombie");

	int i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;

	return 0;
}
