/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:14:18 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 12:41:25 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon() {}

Weapon::~Weapon() {}

std::string	Weapon::getType(void) const
{
	return this->type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
