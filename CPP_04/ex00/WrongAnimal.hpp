/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:59:17 by camarcos          #+#    #+#             */
/*   Updated: 2026/04/17 13:55:05 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal& other );
		WrongAnimal& operator=( const WrongAnimal& other );
		virtual ~WrongAnimal();

		void		makeSound( void ) const;
		std::string	getType( void ) const;
};
