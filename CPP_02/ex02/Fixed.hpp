/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 11:15:32 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/10 11:49:49 by carolinamc       ###   ########.fr       */
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

		/* Orthodox Canonical From*/
		Fixed();
		Fixed( const int nbr );
		Fixed( const float nbr );
		Fixed( const Fixed& other );
		Fixed& operator=( const Fixed& other );
		~Fixed();

		/* Getters & Setters */
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		
		/* Overload operators */
		// Comparison operators
		bool operator!=( const Fixed& other );
		bool operator==( const Fixed& other );
		bool operator>=( const Fixed& other );
		bool operator<=( const Fixed& other );
		bool operator>( const Fixed& other );
		bool operator<( const Fixed& other );

		// Arithmetic operators
		Fixed operator+( const Fixed& other );
		Fixed operator-( const Fixed& other );
		Fixed operator/( const Fixed& other );
		Fixed operator*( const Fixed& other );

		// Increment / Decrement operators
		Fixed	operator++( int ); 		// i++
		Fixed&	operator++( void ); 	// ++i
		Fixed	operator--( int );		// i--
		Fixed&	operator--( void );		// --i

		/* Public Methods */
		int				toInt( void ) const;
		float			toFloat( void ) const;
		static Fixed&			min( Fixed& a, Fixed& b );
		static const Fixed&		min( const Fixed& a, const Fixed& b );
		static Fixed&			max( Fixed& a, Fixed& b );
		static const Fixed&		max( const Fixed& a, const Fixed& b );
};

std::ostream& operator<<(std::ostream& op, Fixed const& nbr);