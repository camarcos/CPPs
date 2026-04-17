/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:58:53 by camarcos          #+#    #+#             */
/*   Updated: 2026/04/17 16:45:34 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Animal {
	protected:
		std::string type;

	public:
		Animal();
		Animal( const Animal& other );
		Animal& operator=( const Animal& other );
		virtual ~Animal();

		std::string	getType( void ) const;
		virtual void		makeSound( void ) const;

};
