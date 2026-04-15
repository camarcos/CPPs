/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:18:25 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/15 16:49:10 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap ClapTrap("Lola");

	ClapTrap.attack("Alex");
	ClapTrap.attack("Alex");
	ClapTrap.takeDamage(3);
	ClapTrap.beRepaired(11);
}