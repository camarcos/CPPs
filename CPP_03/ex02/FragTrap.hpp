/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTap.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:23:10 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/15 13:24:50 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap();
		FragTrap( std::string _name );
		FragTrap( const FragTrap& other );
		FragTrap& operator=( const FragTrap& other );
		~FragTrap();

		void	attack( const std::string& target );
		void	highFivesGuys(void);
};