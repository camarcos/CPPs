/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:54:54 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/15 15:44:32 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
		unsigned int	_maxHitPoints;
	
	public:
		ClapTrap();
		ClapTrap( std::string _name );
		ClapTrap( const ClapTrap& other );
		ClapTrap& operator=( const ClapTrap& other );
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		getName( void ) const;
		unsigned int	getHP( void ) const;
		unsigned int	getEP( void ) const;
		unsigned int	getAD( void ) const;
		unsigned int	getMaxHP( void ) const;

		void	setName( std::string name );
		void	setHP( unsigned int hitPoints );
		void	setEP( unsigned int energyPoints );
		void	setAD( unsigned int attackDamage );
};
