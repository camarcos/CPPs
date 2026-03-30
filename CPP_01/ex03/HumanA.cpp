/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:37:00 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 12:39:45 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}
