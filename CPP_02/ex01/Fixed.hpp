/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:23:09 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/10 11:54:06 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_rawBits;
		static int const	_fractionalBits;

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
