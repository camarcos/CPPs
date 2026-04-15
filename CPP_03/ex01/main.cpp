/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:53:09 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/15 16:49:52 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a;
	ScavTrap b("Lola");
	ScavTrap c(b);
	ScavTrap d;

	a.attack("Alex");
	b.attack("Miguel");
	c.attack("Javier");
	a.takeDamage(10);
	a.beRepaired(10);
	b.takeDamage(200);
	b.beRepaired(10);
	b.takeDamage(10);
	c.takeDamage(10);
	c.beRepaired(10);
	c.guardGate();
}
