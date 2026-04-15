/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:54:57 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/15 17:07:56 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Orthodox canonical Class */
ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string _name): _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << this->_name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
	std::cout << other._name << " ClapTrap created with copy constructor" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHP();
		this->_energyPoints = other.getEP();
		this->_attackDamage = other.getAD();
	}

	std::cout << this->_name << " ClapTrap created with copy assignment operator" << std::endl;

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " ClapTrap destroyed" << std::endl;
}

/* Methods */
void	ClapTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cout << this->_name << " failed to attack, no target specified\n";
		return ;
	}
	if (this->getHP() == 0)
	{
		std::cout << this->_name << " cannot attack because it has no HP\n";
		return ;
	}
	if (this->getEP() == 0)
	{
		std::cout << this->_name << " cannot attack because it has no EP\n";
		return ;
	}
	this->_energyPoints--;

	std::cout << "ClapTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_attackDamage << " points of damage!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() == 0)
	{
		std::cout << this->_name << " it's already dead!\n";
		return;
	}
	if (amount > this->getHP())
		this->setHP(0);
	else
		this->setHP(this->_hitPoints - amount);

	std::cout << "ClapTrap " << this->_name;
	std::cout << " has taken " << amount << " points of damage.";

	if (this->getHP() == 0)
		std::cout << " ClapTrap " << this->_name << " it's now dead :(" << std::endl;
	else
		std::cout << " ClapTrap " << this->_name << " current HP is: " << this->getHP() << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() == 10)
	{
		std::cout << this->_name << " cannot be repaired because it has full HP\n";
		return;
	}
	if (this->getHP() == 0)
	{
		std::cout << this->_name << " cannot be repaired because it has no HP\n";
		return;
	}
	if (this->getEP() == 0)
	{
		std::cout << this->_name << " cannot be repaired because it has no EP\n";
		return;
	}
	this->_energyPoints--;

	if (this->_hitPoints + amount > 10)
		this->setHP(10);
	else
		this->setHP(this->_hitPoints + amount);
	
	std::cout << "ClapTrap " << this->_name << " repaired himself successfully!";
	std::cout << " Current HP: " << this->getHP() << std::endl;
}

/* Getters */
std::string		ClapTrap::getName( void ) const { return this->_name; }
unsigned int	ClapTrap::getHP( void ) const { return this->_hitPoints; }
unsigned int	ClapTrap::getEP( void ) const { return  this->_energyPoints; }
unsigned int	ClapTrap::getAD( void ) const { return  this->_attackDamage; }
unsigned int	ClapTrap::getMaxHP( void ) const { return this->_maxHitPoints; }

/* Setters */
void	ClapTrap::setName( std::string name ) { this->_name = name; }
void	ClapTrap::setHP( unsigned int hitPoints ) { this->_hitPoints = hitPoints; }
void	ClapTrap::setEP( unsigned int energyPoints ) { this->_energyPoints = energyPoints; }
void	ClapTrap::setAD( unsigned int attackDamage ) { this->_attackDamage = attackDamage; }
