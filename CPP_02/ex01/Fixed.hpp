/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:23:09 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/08 11:52:04 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					rawBits;
		static int const	fractionalBits;

	public:
		Fixed();
		Fixed( const int nbr );
		Fixed( const float nbr );
		Fixed( const Fixed& other );
		Fixed& operator=( const Fixed& other );
		~Fixed();

		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );

		int		toInt( void ) const;
		float	toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& op, Fixed const& nbr);
