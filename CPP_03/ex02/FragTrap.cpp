/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:22:56 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/15 17:18:13 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "Default FragTrap created" << std::endl;
}

FragTrap::FragTrap( std::string _name ): ClapTrap(_name)
{
	this->_name = _name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	
	std::cout << this->_name << " FragTrap created" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap()
{
	std::cout << other._name << " FragTrap created with copy constructor" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=( const FragTrap& other )
{
	if (this != &other) {
		this->_name = other.getName();
		this->_hitPoints = other.getHP();
		this->_energyPoints = other.getEP();
		this->_attackDamage = other.getAD();
		this->_maxHitPoints = other.getMaxHP();
	}

	std::cout << this->_name << " FragTrap created with copy assignment operator" << std::endl;

	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " FragTrap destroyed" << std::endl;
}

/* Public Methods */
void	FragTrap::attack( const std::string& target )
{	
	if (target.empty()) {
		std::cout << this->_name << " FragTrap failed to attack, no target specified\n";
		return ;
	}
	if (this->getHP() == 0) {
		std::cout << this->_name << " FragTrap cannot attack because it has no HP\n";
		return ;
	}
	if (this->getEP() == 0) {
		std::cout << this->_name << " FragTrap cannot attack because it has no EP\n";
		return ;
	}
	this->_energyPoints--;

	std::cout << this->_name << " FragTrap";
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->getHP() != 0)
		std::cout << this->_name << " FragTrap: Hey there! Can I get a high five?" << std::endl;
	else
		std::cout << this->_name << " FragTrap cannot get a high five because is dead :(" << std::endl;
}
