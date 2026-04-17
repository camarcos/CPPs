/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:58:56 by camarcos          #+#    #+#             */
/*   Updated: 2026/04/17 13:53:37 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Orthodox canonical class form */
Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal()
{
	std::cout << "Default Cat copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=( const Cat& other )
{
	std::cout << "Default Cat copy assignment operator called" << std::endl;
	
	if (this != &other)
		this->type = other.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
}

/* Public Methods */
void	Cat::makeSound() const { std::cout << "Meowwwww Meowwwww" << std::endl; }
