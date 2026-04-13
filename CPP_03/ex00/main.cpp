/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:18:25 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/13 14:41:07 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	/* Orthodox canonical form test */
	ClapTrap a;
	ClapTrap b( a );
	ClapTrap c("Pepa");
	ClapTrap d;
	d = c;

	std::cout << a.getName() << std::endl;
	std::cout << b.getName() << std::endl;
	std::cout << c.getName() << std::endl;
	std::cout << d.getName() << std::endl;

	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << &c << std::endl;
	std::cout << &d << std::endl;

	return 0;
}