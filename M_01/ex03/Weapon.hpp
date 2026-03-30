/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:36:55 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 12:41:51 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string	getType(void) const;
		void		setType(std::string type);
};
