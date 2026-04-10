/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 11:15:35 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/10 12:27:09 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: _fractionalBits = 8;

/* Orthodox Canonical Class Form */
Fixed::Fixed(): _rawBits(0) {}

Fixed::Fixed( const int nbr )
{
	this->_rawBits = (nbr << _fractionalBits);
}

Fixed::Fixed( const float nbr )
{
	this->_rawBits = roundf( nbr * (1 << _fractionalBits) );
}

Fixed::Fixed( const Fixed &copy )
{
	*this = copy;
}

Fixed& Fixed::operator=( const Fixed& other )
{
	if (this != &other)
		_rawBits = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {}

/* Getters & Setters */
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

Fixed& Fixed::min( Fixed& a, Fixed& b )
{
	if (b.toFloat() < a.toFloat())
		return b;
	return a;
}

const Fixed& Fixed::min( const Fixed& a, const Fixed& b )
{
	if (b.toFloat() < a.toFloat())
		return b;
	return a;
}

Fixed& Fixed::max( Fixed& a, Fixed& b )
{
	if (b.toFloat() > a.toFloat())
		return b;
	return a;
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b )
{
	if (b.toFloat() > a.toFloat())
		return b;
	return a;
}

/* Overload operators */
// Comparison operators
bool Fixed::operator!=( const Fixed& other )
{
	return this->toFloat() != other.toFloat();
}

bool Fixed::operator==( const Fixed& other )
{
	return this->toFloat() == other.toFloat();
}

bool Fixed::operator>=( const Fixed& other )
{
	return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=( const Fixed& other )
{
	return this->toFloat() <= other.toFloat();
}

bool Fixed::operator>( const Fixed& other )
{
	return this->toFloat() > other.toFloat();
}

bool Fixed::operator<( const Fixed& other )
{
	return this->toFloat() < other.toFloat();
}

// Arithmetic operators
Fixed Fixed::operator+( const Fixed& other )
{
	return Fixed( this->toFloat() + other.toFloat() );
}

Fixed Fixed::operator-( const Fixed& other )
{
	return Fixed( this->toFloat() - other.toFloat() );
}

Fixed Fixed::operator/( const Fixed& other )
{
	return Fixed( this->toFloat() / other.toFloat() );
}

Fixed Fixed::operator*( const Fixed& other )
{
	return Fixed( this->toFloat() * other.toFloat() );
}

// Increment / Decrement operators
Fixed Fixed::operator++( int n )
{ //i++
	Fixed tmp = *this;

	if (n != 0)
		_rawBits += n;
	else
		_rawBits++;
	return tmp;
}

Fixed& Fixed::operator++( void )
{ //++i
	this->_rawBits++;
	return *this;
}

Fixed Fixed::operator--( int n )
{ //i--
	Fixed tmp = *this;

	if (n != 0)
		this->_rawBits -= n;
	else
		this->_rawBits--;
	return tmp;
}

Fixed& Fixed::operator--( void )
{ //--i
	this->_rawBits--;
	return *this;
}

/* operator << overload */
std::ostream& operator<<(std::ostream& op, Fixed const& nbr)
{
	op << nbr.toFloat();
	return op;
}
