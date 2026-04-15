/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:53:09 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/15 16:50:59 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a;
	FragTrap b("Lola");
	FragTrap c(b);
	FragTrap d;

	a.attack("Alex");
	b.attack("Miguel");
	c.attack("Javier");
	a.takeDamage(10);
	a.beRepaired(10);
	b.takeDamage(5);
	b.beRepaired(10);
	c.takeDamage(200);
	c.beRepaired(10);
	c.highFivesGuys();
}
