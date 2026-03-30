/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:25:38 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/24 12:35:54 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl Carla;

	Carla.complain( "DEBUG" );
	Carla.complain( "INFO" );
	Carla.complain( "WARNING" );
	Carla.complain( "ERROR" );

	return 0;
}
