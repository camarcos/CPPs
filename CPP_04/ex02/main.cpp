/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 09:19:57 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/17 17:10:12 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define NUMBER_ANIMAL 4

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
	return 0;
}
