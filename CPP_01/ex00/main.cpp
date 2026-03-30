/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:07:33 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 12:37:10 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	randomChump("Carla");

	Zombie zombie1("Lola");
	Zombie zombie2 = Zombie("Marta");
	Zombie *zombie3 = newZombie("Pepa");

	zombie1.announce();
	zombie2.announce();
	zombie3->announce();

	delete zombie3;

	return 0;
}
