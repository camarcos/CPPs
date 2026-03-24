/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:13:35 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/24 12:08:32 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA lola("Lola", club);
		lola.attack();
		club.setType("some other type of club");
		lola.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB sara("Sara");
		sara.setWeapon(club);
		sara.attack();
		club.setType("some other type of club");
		sara.attack();
	}
	return 0;
}