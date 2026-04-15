/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:54:51 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/15 16:13:27 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/* Orthodox canonical Class */
ScavTrap::ScavTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_maxHitPoints = 100;

	std::cout << "Default ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap( std::string _name ): ClapTrap(_name)
{
	this->_name = _name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_maxHitPoints = 100;
	
	std::cout << this->_name << " ScavTrap created" << std::endl;

}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap()
{
	std::cout << other._name << " ScavTrap created with copy constructor" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other )
{
	if (this != &other) {
		this->_name = other.getName();
		this->_hitPoints = other.getHP();
		this->_energyPoints = other.getEP();
		this->_attackDamage = other.getAD();
		this->_maxHitPoints = other.getMaxHP();
	}

	std::cout << this->_name << " ScavTrap created with copy assignment operator" << std::endl;

	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " ScavTrap destroyed" << std::endl;
}

/* Public Methods */
void	ScavTrap::attack( const std::string& target )
{	
	if (target.empty()) {
		std::cout << this->_name << " ScavTrap failed to attack, no target specified\n";
		return ;
	}
	if (this->getHP() == 0)
	{
		std::cout << this->_name << " ScavTrap cannot attack because it has no HP\n";
		return ;
	}
	if (this->getEP() == 0)
	{
		std::cout << this->_name << " ScavTrap cannot attack because it has no EP\n";
		return ;
	}
	this->_energyPoints--;

	std::cout << this->_name << " ScavTrap";
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->getHP() != 0)
		std::cout << this->_name << " ScavTrap is now in Gate Keeper mode" << std::endl;
	else
		std::cout << this->_name << " ScavTrap cannot be in Gate Keeper mode. It's dead" << std::endl;
}
