/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:58:59 by camarcos          #+#    #+#             */
/*   Updated: 2026/04/17 09:07:34 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Cat : public Animal {

	public:
		Cat();
		Cat( const Cat& other );
		Cat& operator=( const Cat& other );
		~Cat();

		void	makeSound( void ) const;

};
