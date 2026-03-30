/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:08:05 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 12:36:23 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Zombie 
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie( void );

		void 		announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
