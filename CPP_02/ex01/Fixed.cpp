/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:26:35 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/10 11:55:53 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: _fractionalBits = 8;

/* Orthodox Canonical Class Form */
Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int nbr )
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = (nbr << _fractionalBits);
}

Fixed::Fixed( const float nbr )
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf( nbr * (1 << _fractionalBits) );
}

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed& other )
{
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* Getters & setters */
int Fixed::getRawBits( void ) const
{
	return this->_rawBits;
}

void Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
}

/* Public Methods */
int	Fixed::toInt( void ) const
{
	return _rawBits >> _fractionalBits;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_rawBits / (1 << _fractionalBits));
}

/* operator << overload */
std::ostream& operator<<(std::ostream& op, Fixed const& nbr)
{
	op << nbr.toFloat();
	return op;
}
