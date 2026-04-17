/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:59:09 by camarcos          #+#    #+#             */
/*   Updated: 2026/04/17 14:17:33 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog( const Dog& other );
		Dog& operator=( const Dog& other );
		~Dog();

		void	makeSound( void ) const;
};
