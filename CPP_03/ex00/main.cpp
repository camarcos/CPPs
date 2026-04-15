/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:18:25 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/15 12:50:09 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ClapTrap("Paula");

	ClapTrap.attack("Alex");
	ClapTrap.attack("Alex");
	ClapTrap.takeDamage(3);
	ClapTrap.beRepaired(11);
}